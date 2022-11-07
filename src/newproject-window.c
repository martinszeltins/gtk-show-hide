#include "include/newproject-window.h"

struct _NewprojectWindow
{
    AdwApplicationWindow  parent_instance;
    GtkHeaderBar *        header_bar;
    GtkButton *           btn_show;
    GtkButton *           btn_hide;
    GtkImage *            img_circle;
};

G_DEFINE_FINAL_TYPE (NewprojectWindow, newproject_window, ADW_TYPE_APPLICATION_WINDOW)

static void newproject_window_class_init (NewprojectWindowClass * klass)
{
    GtkWidgetClass * widget_class = GTK_WIDGET_CLASS (klass);

    gtk_widget_class_set_template_from_resource (widget_class, "/martins/new/project/newproject-window.ui");
    gtk_widget_class_bind_template_child (widget_class, NewprojectWindow, header_bar);
    gtk_widget_class_bind_template_child (widget_class, NewprojectWindow, btn_show);
    gtk_widget_class_bind_template_child (widget_class, NewprojectWindow, btn_hide);
    gtk_widget_class_bind_template_child (widget_class, NewprojectWindow, img_circle);

    gtk_widget_class_bind_template_callback (widget_class, btn_show_clicked);
    gtk_widget_class_bind_template_callback (widget_class, btn_hide_clicked);
}

static void newproject_window_init (NewprojectWindow * self)
{
    gtk_widget_init_template (GTK_WIDGET (self));
}

void btn_show_clicked (GtkWidget * button, NewprojectWindow * window)
{
  gtk_widget_show(GTK_WIDGET(window->img_circle));
}

void btn_hide_clicked (GtkWidget * button, NewprojectWindow * window)
{
  gtk_widget_hide(GTK_WIDGET(window->img_circle));
}
