
#include <iostream>
#include "NotificationEmail.h"
#include "NotificationSMS.h"
#include "NotificationPush.h"
#include "GestionnaireNotifications.h"

using namespace std;

int main()
{
    // Creation des objets
    NotificationEmail email(
        "sara@example.com",
        "Nouvelle connexion detectee",
        "Securite"
    );

    NotificationSMS sms(
        "0612345678",
        "Votre code est 4582",
        "Orange"
    );

    NotificationPush push(
        "user_102",
        "Paiement confirme",
        "MyBank"
    );

    // Partie C : tableau de pointeurs
    Notification* tab[3];

    tab[0] = &email;
    tab[1] = &sms;
    tab[2] = &push;

    cout << "===== PARTIE C =====" << endl;

    for (int i = 0; i < 3; i++)
    {
        tab[i]->afficher();
        tab[i]->envoyer();

        cout << endl;
    }

    // Partie D : gestionnaire
    GestionnaireNotifications gestionnaire;

    gestionnaire.ajouter(&email);
    gestionnaire.ajouter(&sms);
    gestionnaire.ajouter(&push);

    cout << "===== PARTIE D =====" << endl;

    gestionnaire.envoyerToutes();

    return 0;
}
