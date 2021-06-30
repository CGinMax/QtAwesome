#ifndef FAICONPROVIDER_H
#define FAICONPROVIDER_H

#include <QQuickImageProvider>
#include "QtAwesome.h"

class FAIconProvider : public QQuickImageProvider
{
public:
    explicit FAIconProvider(ImageType type = ImageType::Image);
    ~FAIconProvider() override;

    QImage requestImage(const QString &name, QSize *size, const QSize &requestedSize) override;

    QPixmap requestPixmap(const QString &name, QSize *size, const QSize &requestedSize) override;

    void static registerProvider(QQmlEngine* engine, const QString& singletonName = QString("faicon"));
private:
    QtAwesome _fa;
};

#endif // FAICONPROVIDER_H
