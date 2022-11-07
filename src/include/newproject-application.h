#ifndef NEWPROJECT_APPLICATION_H
#define NEWPROJECT_APPLICATION_H

#include <adwaita.h>

#define NEWPROJECT_TYPE_APPLICATION (newproject_application_get_type())

G_DECLARE_FINAL_TYPE (NewprojectApplication, newproject_application, NEWPROJECT, APPLICATION, AdwApplication)

NewprojectApplication * newproject_application_new (const char * application_id, GApplicationFlags flags);
void                    newproject_application_activate (GApplication * app);

#endif
