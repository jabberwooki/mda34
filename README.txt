
-- INSTALLATION --

1) Cloner le projet MDA34 depuis Github.

2) Aller dans le répertoire mda34

3) Construire la distribution MDA34 à l'aide du script build.sh.
./scripts/build.sh

8) Créer un vhost Apache.
Le vhost doit pointer sur le répertoire .../mda34/www

9) Aller dans le répertoire www

10) Créer la base de données
drush sql-create --db-su=sqlroot --db-su-pw=sqlpass --db-url="mysql://dbusername:dbpass@localhost/dbname"

11) Lancer l'installation
- soit avec drush : 
drush site-install mda --db-url="mysql://dbusername:dbpass@localhost/dbname"
- soit depuis le navigateur à l'adresse suivante :
http://vhost/install.php

12) IMPORTANT! Copier le fichier settings.php généré par l'installation dans le répertoire "shared".

