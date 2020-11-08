/**
 * Copyright (c) 2011-2018 by Andrew Mustun. All rights reserved.
 * 
 * This file is part of the QCAD project.
 *
 * QCAD is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * QCAD is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with QCAD.
 */

#ifndef RLISTWIDGET_H_
#define RLISTWIDGET_H_

#include "gui_global.h"

#include <QWidget>
#include <QListWidget>
#include <QListWidgetItem>
#include <QListView>
#include <QtDebug>

/**
 * List widget with some additional functionality for icons.
 *
 * \ingroup gui
 * \scriptable
 * \generateScriptShell
 */
class QCADGUI_EXPORT RListWidget: public QListWidget {

    Q_OBJECT

public:
    RListWidget(QWidget* parent=0);
    virtual ~RListWidget();

    void setIconOffset(int o) {
        iconOffset = o;
    }

    //void setSelectableColumn(int c) {
    //    selectableColumn = c;
    //}

    QModelIndex	getIndex(QListWidgetItem* item) {
        return indexFromItem(item);
    }

    QListWidgetItem* getActiveItem();

    // 设置为缩略图模式
    Q_INVOKABLE void setBlockThumbMode() {
        clearPropertyFlags();
        setViewMode(QListView::IconMode);
        setWrapping(false);
        setMovement(QListView::Static);
        setFlow(QListView::LeftToRight);
        setIconSize(QSize(100, 100));
        setSpacing(10);
    }

protected:
    virtual void contextMenuEvent(QContextMenuEvent* e);
    virtual void mousePressEvent(QMouseEvent* e);
    virtual void mouseReleaseEvent(QMouseEvent* e);
    virtual void mouseMoveEvent(QMouseEvent* e);

signals:
    void iconClicked(int x, QListWidgetItem* item);

private:
    QListWidgetItem* itemPressed;
    int iconOffset;
//    // selectable column or -1 for all:
//    int selectableColumn;
};

Q_DECLARE_METATYPE(RListWidget*)

#endif
