#ifndef NEWPROJECT_WINDOW_H
#define NEWPROJECT_WINDOW_H

#pragma once

#include <adwaita.h>

G_BEGIN_DECLS

#define NEWPROJECT_TYPE_WINDOW (newproject_window_get_type())

G_DECLARE_FINAL_TYPE (NewprojectWindow, newproject_window, NEWPROJECT, WINDOW, AdwApplicationWindow)

void btn_show_clicked (GtkWidget * button);
void btn_hide_clicked (GtkWidget * button);

G_END_DECLS

#endif

