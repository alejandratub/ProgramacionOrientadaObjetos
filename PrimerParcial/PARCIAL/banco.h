#ifndef _BANCO
#define _BANCO

class banco{
    public:
    
    banco();
    banco(const banco &obj);
    ~banco();
     double getNuevoSaldo() const;
    double getRetirar() const;
    double getDepositar() const;
    double getSaldo() const;
 
    double getNoCuenta() const;
    

    void setRetirar(double);
    void setDepositar(double);
    void setSaldo(double);
    void setNoCuenta(double);
    
    private:
    double * deposito;
    double * retiro;
    double * saldo;
    double * nuevoSaldo;
    
    double *numeroCuenta;
};

#endif