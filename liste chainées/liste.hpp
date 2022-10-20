namespace lc
{
    class Cellule
    {       
        public:
            Cellule *suivante;
            int valeur;

            Cellule(int valeur, Cellule *suivante);

            static int longueur(Cellule *cellule);

            static Cellule *niemeElement(Cellule *cellule, int i);
    };

    class Liste
    {
        private:
            Cellule *tete;

        public:
            Liste();

            bool estVide();

            int longueur();

            Cellule *derniere();

            void ajoute(int x);
    };
}