#ifndef WIDGETDISPARITY_H
#define WIDGETDISPARITY_H

#include <appwidget.h>
#include <appsettings.h>
#include <QWidget>
#include <QFileDialog>
#include <QDateTime>
#include <imagereader.h>
#include <imagewriter.h>
#include <videoreader.h>
#include <videowriter.h>
#include <rectifier.h>
#include <stereomatcher.h>


namespace Ui {
class WidgetDisparity;
}

class WidgetDisparity : public AppWidget
{
    Q_OBJECT

public:
    explicit WidgetDisparity(AppSettings *sett);
    ~WidgetDisparity();

private slots:
    void on_pushButtonSource_clicked();

    void on_pushButtonResults_clicked();

    void on_pushButtonStart_clicked();

private:
    Ui::WidgetDisparity *ui;
    QString sourcesDir, resultsDir, lastDir, status;
    QString leftSource, rightSource, dir;
    std::vector<QString> filesVector;
    std::vector<QString>::iterator iter;
    SourceReader *sourceReader;
    Rectifier *rectifier;
    StereoMatcher *stereoMatcher;
    FileWriter *fileWriter;
    QThread *threadSourceReader;
    QThread *threadRectifier;
    QThread *threadStereoMatcher;
    QThread *threadFileWriter;
    bool isVideo;

    void stopThreads();
    void grabNextFiles();
};

#endif // WIDGETDISPARITY_H
