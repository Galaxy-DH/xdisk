﻿#pragma once

#include <QtWidgets/QWidget>
#include "ui_xdisk_gui.h"

class XDiskGUI : public QWidget
{
    Q_OBJECT

public:
    XDiskGUI(QWidget *parent = nullptr);
    ~XDiskGUI();
    void UpdateServerInfo();
public slots:
    void Refresh();
    void UpdateDir(std::string dirs);
    void Upload();
    void Download();
    void DownloadComplete();

private:
    Ui::XDiskGUIClass ui;
};
