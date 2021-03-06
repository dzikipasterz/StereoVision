#ifndef DEPTHDISPLAY_H
#define DEPTHDISPLAY_H

#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/calib3d/calib3d.hpp>
#include <QLabel>
#include <QSize>
#include <QEvent>
#include <QMouseEvent>
#include <QPainter>
#include <QDateTime>
#include <QElapsedTimer>

class DepthDisplay : public QLabel
{
    Q_OBJECT
public:
    explicit DepthDisplay(QWidget *parent = nullptr);

    QSize minimumSizeHint() const override;
    void setImage(QImage disparity);
    void setDispToDistMat(cv::Mat map);

signals:
    void sendDistance(double distance);
    void sendCoords(int x, int y);
    void sendFPS(double fps);

public slots:
    void receiveCoords(int x, int y);

protected:
    void mousePressEvent(QMouseEvent *event) override;


private:
    bool showPixel;
    int xPixelSelect, yPixelSelect;
    QPainter *painter;
    QPen penline;
    QPixmap pixmapTemp;
    QImage imageRaw;
    QElapsedTimer timer;

    double distance;
    double fps;
    cv::Mat dispDistMap;

    void dispToDepth();
};

#endif // DEPTHDISPLAY_H
