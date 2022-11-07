#include "include/newproject-application.h"
#include "include/newproject-window.h"

struct _NewprojectApplication
{
  AdwApplication parent_instance;
};

G_DEFINE_TYPE (NewprojectApplication, newproject_application, ADW_TYPE_APPLICATION)

static void newproject_application_class_init (NewprojectApplicationClass * klass)
{
  GApplicationClass * app_class = G_APPLICATION_CLASS (klass);

  app_class->activate = newproject_application_activate;
}

static void newproject_application_init (NewprojectApplication * self)
{
  //
}

NewprojectApplication * newproject_application_new (const char * application_id, GApplicationFlags flags)
{
  return g_object_new (NEWPROJECT_TYPE_APPLICATION, "application-id", application_id, "flags", flags, NULL);
}

void newproject_application_activate (GApplication * app)
{
  GtkWindow * window;

  GtkCssProvider * css_provider = gtk_css_provider_new ();
  gtk_css_provider_load_from_path (css_provider, "style.css");
  gtk_style_context_add_provider_for_display(gdk_display_get_default(), GTK_STYLE_PROVIDER(css_provider), GTK_STYLE_PROVIDER_PRIORITY_USER);

  window = g_object_new (NEWPROJECT_TYPE_WINDOW, "application", app, NULL);

  gtk_window_present (window);
}
