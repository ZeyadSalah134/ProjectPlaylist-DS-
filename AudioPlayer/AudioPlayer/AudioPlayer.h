#pragma once

#include <QtWidgets/QWidget>
#include <QListWidget>
#include <QPushButton>
#include <QLabel>
#include <QSlider>
#include <QTimer>
#include <QMap>
#include <QComboBox>
#include <QIcon>
#include <QInputDialog>

#include "miniaudio.h"

// --- 1. تعريف العقدة (SurahNode) ---
struct SurahNode {
    QString name;
    QString path;
    SurahNode* next = nullptr;
    SurahNode* prev = nullptr;
};

// --- 2. تعريف هيكل قائمة التشغيل (Playlist) ---
struct Playlist {
    QString name;
    SurahNode* head = nullptr;
    SurahNode* tail = nullptr;
    QString iconPath;
};


class AudioPlayer : public QWidget
{
    Q_OBJECT

public:
    AudioPlayer(QWidget* parent = nullptr);
    ~AudioPlayer();

private slots:
    void playPauseClicked();
    void stopClicked();
    void nextClicked();
    void prevClicked();
    void restartClicked();
    void onPlaylistDoubleClicked(QListWidgetItem* item);
    void updateProgress();
    void seekTo(int value);
    void setVolume(int value);
    void deleteSurahClicked();
    void addSurahClicked();
    void playlistSelectionChanged(int index);
    void createNewPlaylistClicked();
    void renamePlaylistClicked();

private:
    void setupUi();
    void setupDefaultPlaylists();
    void renamePlaylist(const QString& oldName, const QString& newName);

    void addSurahToActiveList(QString name, QString filename, bool isAbsolutePath = false);
    bool deleteSurahFromActiveList(const QString& name);
    void deleteList(Playlist& list);

    bool loadTrack(SurahNode* node);
    void updateUiState();
    QString formatTime(ma_uint64 frames, ma_uint32 sampleRate);

    // عناصر الواجهة
    QListWidget* playlistWidget;
    QLabel* statusLabel;
    QLabel* currentTimeLabel;
    QLabel* totalTimeLabel;
    QSlider* seekSlider;
    QSlider* volumeSlider;
    QPushButton* playBtn;
    QPushButton* stopBtn;
    QPushButton* nextBtn;
    QPushButton* prevBtn;
    QPushButton* restartBtn;
    QPushButton* addBtn;
    QPushButton* deleteBtn;
    QPushButton* createPlaylistBtn;
    QPushButton* renamePlaylistBtn;
    QComboBox* playlistSelector;

    QLabel* albumArtLabel;

    // متغيرات النظام
    QMap<QString, Playlist> allPlaylists;
    Playlist* activePlaylist = nullptr;
    SurahNode* currentSurah = nullptr;

    // Miniaudio
    ma_decoder audioDecoder;
    ma_device audioDevice;
    ma_device_config deviceConfig;
    bool isLoaded = false;
    bool isPlaying = false;

    QTimer* timer;
    ma_uint64 totalFrames = 0;

    static void data_callback(ma_device* pDevice, void* pOutput, const void* pInput, ma_uint32 frameCount);
};