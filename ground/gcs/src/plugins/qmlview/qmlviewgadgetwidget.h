/**
 ******************************************************************************
 *
 * @file       qmlviewgadgetwidget.h
 * @author     Edouard Lafargue Copyright (C) 2010.
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup OPMapPlugin QML Viewer Plugin
 * @{
 * @brief The QML Viewer Gadget 
 *****************************************************************************/
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#ifndef QMLVIEWGADGETWIDGET_H_
#define QMLVIEWGADGETWIDGET_H_

#include "qmlviewgadgetconfiguration.h"

#include <QQuickView>

#include <QtSvg/QSvgRenderer>
#include <QtSvg/QGraphicsSvgItem>

#include <QFile>
#include <QTimer>

class UAVObject;

class QmlViewGadgetWidget : public QQuickView
{
    Q_OBJECT

public:
    QmlViewGadgetWidget(QWindow *parent = 0);
   ~QmlViewGadgetWidget();
   void setQmlFile(QString fn);

   void enableSmoothUpdates(bool flag) { beSmooth = flag; }

private:
   bool beSmooth;
   QString m_fn;
};
#endif /* QmlViewGADGETWIDGET_H_ */
