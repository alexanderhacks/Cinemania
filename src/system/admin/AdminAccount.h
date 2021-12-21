#ifndef ADMIN_ACCOUNT
#define ADMIN_ACCOUNT

/** Singleton Design Pattern
 *  Solo existe un objeto de la clase. Ejemplo: solo existe un presidente.
*/

class AdminAccount
{
private:
    AdminAccount *unique_;
    AdminAccount() = default;
    // En esta sección se podrá añadir funcionalidades para la clase administrador principal
    // TODO: Añadir funcionalidades para admin
public:
    AdminAccount *GetAdminAccount();
};

AdminAccount *AdminAccount::GetAdminAccount()
{
    if (unique_ == nullptr)
    {
        unique_ = new AdminAccount();
    }
    return unique_;
};

#endif