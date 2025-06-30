#ifndef CAJAFUERTE_H
#define CAJAFUERTE_H


class CajaFuerte
{
    public:
        CajaFuerte();
        virtual ~CajaFuerte();
        float cuantoHay ();
        void guardar (float);
        void vaciar ();

    protected:

    private:
        float importe;
        int cantVeces;
};

#endif // CAJAFUERTE_H
