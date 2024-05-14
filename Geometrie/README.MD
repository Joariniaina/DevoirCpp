# COMPILATION DE TOUTES LES FICHIERS SOURCE POUR LA BIBLIOTHÈQUE
On compile tous les dans `./VerifyDir/source/*`

```bash
    g++ -fPIC -c ./forme3D/Cylindre/*.cpp ./forme3D/Sphere/*.cpp ./SimpleForme/Carre/*.cpp ./SimpleForme/Cercle/*.cpp ./SimpleForme/Losange/*.cpp ./SimpleForme/Ovale/*.cpp ./SimpleForme/Rectangle/*.cpp ./SimpleForme/Trapeze/*.cpp ./SimpleForme/Triangle/*.cpp
```

# CRÉATION DE LA BIBLIOTHÈQUE DYNAMIQUE
ON crée la bibliotheque `library.so`

```bash
    g++ -o library.so -shared Cylindre.o Sphere.o Carre.o Cercle.o Losange.o Ovale.o Rectangle.o Trapeze.o Triangle.o
```

# CRÉATION DU FICHIER DE CONFIGURATION POUR LA BIBLIOTHÈQUE
```bash
    sudo touch /etc/ld.so.conf.d/library.conf
    sudo echo "/A" >> /etc/ld.so.conf.d/library.conf
```

# MISE À JOUR DE LA CONFIGURATION
```bash
    sudo ldconfig
```

# LIAISON DE `main.cpp` AVEC LA BIBLIOTHÈQUE STATIQUE
```bash
    g++ main.cpp -L./ -lrary -o dynamic.exe
```

-------------------------------------------------------------------------

# REPERTOIRE DE TRAVAIL EST `DEVOIR`

# COMPILATION DE TOUTES LES FICHIERS SOURCE POUR LA BIBLIOTHÈQUE
```bash
    g++ -c ./forme3D/Cylindre/*.cpp ./forme3D/Sphere/*.cpp ./SimpleForme/Carre/*.cpp ./SimpleForme/Cercle/*.cpp ./SimpleForme/Losange/*.cpp ./SimpleForme/Ovale/*.cpp ./SimpleForme/Rectangle/*.cpp ./SimpleForme/Trapeze/*.cpp ./SimpleForme/Triangle/*.cpp
```

# CRÉATION DE LA BIBLIOTHÈQUE STATIQUE
```bash
    ar -rv library.a *.o
```


# LIAISON DE `main.cpp` AVEC LA BIBLIOTHÈQUE STATIQUE
```bash
    g++ main.cpp -L./ -lrary -o static.exe
```