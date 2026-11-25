
#include "GestionnaireNotifications.h"

GestionnaireNotifications::GestionnaireNotifications()
{
    nb = 0;
}

void GestionnaireNotifications::ajouter(Notification* n)
{
    if (nb < 100)
    {
        notifications[nb] = n;
        nb++;
    }
    else
    {
        cout << "Le tableau est plein !" << endl;
    }
}

void GestionnaireNotifications::envoyerToutes()
{
    for (int i = 0; i < nb; i++)
    {
        notifications[i]->envoyer();
    }
}
