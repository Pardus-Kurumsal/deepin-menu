/**
 * Copyright (C) 2015 Deepin Technology Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 **/

/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -c MenuAdaptor -a dbus_menu_adaptor.h:dbus_menu_adaptor.cpp com.deepin.menu.Menu.xml
 *
 * qdbusxml2cpp is Copyright (C) 2014 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "dbus_menu_adaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class MenuAdaptor
 */

MenuAdaptor::MenuAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

MenuAdaptor::~MenuAdaptor()
{
    // destructor
}

void MenuAdaptor::SetItemActivity(const QString &itemId, bool isActive)
{
    // handle method call com.deepin.menu.Menu.SetItemActivity
    QMetaObject::invokeMethod(parent(), "SetItemActivity", Q_ARG(QString, itemId), Q_ARG(bool, isActive));
}

void MenuAdaptor::SetItemChecked(const QString &itemId, bool checked)
{
    // handle method call com.deepin.menu.Menu.SetItemChecked
    QMetaObject::invokeMethod(parent(), "SetItemChecked", Q_ARG(QString, itemId), Q_ARG(bool, checked));
}

void MenuAdaptor::SetItemText(const QString &itemId, const QString &text)
{
    // handle method call com.deepin.menu.Menu.SetItemText
    QMetaObject::invokeMethod(parent(), "SetItemText", Q_ARG(QString, itemId), Q_ARG(QString, text));
}

void MenuAdaptor::ShowMenu(const QString &menuJsonContent)
{
    // handle method call com.deepin.menu.Menu.ShowMenu
    QMetaObject::invokeMethod(parent(), "ShowMenu", Q_ARG(QString, menuJsonContent));
}

