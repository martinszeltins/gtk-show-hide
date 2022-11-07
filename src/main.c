#include "include/newproject-application.h"

int main (int argc, char * argv[])
{
    g_autoptr(NewprojectApplication) app;

    app = newproject_application_new ("martins.new.project", G_APPLICATION_DEFAULT_FLAGS);
    g_application_run (G_APPLICATION (app), argc, argv);
}
