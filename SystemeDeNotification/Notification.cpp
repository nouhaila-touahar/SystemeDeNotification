
#include "NotificationSMS.h"

NotificationSMS::NotificationSMS(string d, string m, string op)
    : Notification(d, m)
{
    operateur = op;
}

void NotificationSMS::afficher() const
{
    cout << "SMS | Numero : " << destinataire
        << " | Operateur : " << operateur
        << " | Message : " << message << endl;
}

void NotificationSMS::envoyer()
{
    cout << "Envoi du SMS en cours..." << endl;
}
