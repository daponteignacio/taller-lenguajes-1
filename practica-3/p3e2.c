/*
    2. Dados los siguientes bloques de código:

        ---------------------------------------------
        struct persona {
            char nombre[50];
            long int DNI;
        } unaPersona;

        typedef struct persona persona_t;
        ---------------------------------------------
        typedef struct persona {
            char nombre[50];
            long int DNI;
        }
        ---------------------------------------------

    ¿En qué se diferencian ambos bloques? ¿Qué define cada uno?
        - Bloque 1: se define la estructura persona y una variable del tipo 'struct persona'. Luego se crea un alias para 'struct persona' como persona_t;
        - Bloque 2: se define la misma estructura pero no se le da una alias lo cual genera un warning.
*/