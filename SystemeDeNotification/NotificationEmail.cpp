
#include "NotificationEmail.h"

NotificationEmail::NotificationEmail(string d, string m, string o)
    : Notification(d, m)
{
    objet = o;
}

void NotificationEmail::afficher() const
{
    cout << "EMAIL | A : " << destinataire
        << " | Objet : " << objet
        << " | Message : " << message << endl;
}

void NotificationEmail::envoyer()
{
    cout << "Envoi de l'email en cours..." << endl;
}
