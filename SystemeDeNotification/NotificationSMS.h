
#pragma once
#include "Notification.h"

class NotificationSMS : public Notification
{
private:
    string operateur;

public:
    NotificationSMS(string d, string m, string op);

    void afficher() const override;
    void envoyer() override;
};
