
#pragma once
#include "Notification.h"

class NotificationPush : public Notification
{
private:
    string application;

public:
    NotificationPush(string d, string m, string app);

    void afficher() const override;
    void envoyer() override;
};
