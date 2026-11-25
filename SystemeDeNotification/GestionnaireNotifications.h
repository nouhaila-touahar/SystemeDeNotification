
#pragma once

#include "Notification.h"
#include <iostream>
using namespace std;

class GestionnaireNotifications
{
private:
    Notification* notifications[100];
    int nb;

public:
    GestionnaireNotifications();

    void ajouter(Notification* n);

    void envoyerToutes();
};
