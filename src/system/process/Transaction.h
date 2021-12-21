#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <time.h>
#include <chrono>

/* Design Patterns Builder
* Se utiliza el patrón de diseño builder para revisar un
*/

/** Transaction
 * @param _created_time - tiempo de creación
 * @param _statusRequiest - estado de solicitud
 */
class Transaction
{
private:
    std::time_t _created_time{};
    bool _statusRequest{};

public:
    Transaction();

protected:
    void StoreTimeCreated();
    void MakeRequest();
    bool GetRequest();
    virtual void MakeTransaction();
    bool GetTransactionStatus();
};

Transaction::Transaction()
{
    StoreTimeCreated();
    MakeRequest();
    GetRequest();
    MakeTransaction();
    GetTransactionStatus();
}
// Almacena el momento de creación del objeto
void Transaction::StoreTimeCreated()
{
    auto start = std::chrono::system_clock::now();
    _created_time = std::chrono::system_clock::to_time_t(start);
}
// Realiza el pedido de transacción
void Transaction::MakeRequest()
{
}
// Recibe la solicitud de pedido
bool Transaction::GetRequest()
{
}
// Realiza la transacción
void Transaction::MakeTransaction()
{
    // La transacción heredada es añadida en esta sección
}

bool Transaction::GetTransactionStatus()
{
    // Obtiene el estado de la transacción realizada
}

#endif