
-- INSTALLATION D'UNE INSTANCE DE DEV MDA34 --

1) Cloner le projet MDA34 depuis Github.

2) Ajouter la branch develop
git checkout -b develop origin/develop

3) Aller dans le répertoire mda34
Vérifier que vous êtes bien sur la branch develop.

4) Construire la distribution MDA34 à l'aide du script build.sh.
./scripts/build.sh

5) Aller dans le répertoire www

6) Créer la base de données
drush sql-create --db-su=<root-login> --db-su-pw=<root-pass> --db-url="mysql://<db-username>:<db-password>@localhost/<db-name>"

7) Lancer l'installation
drush site-install mda --db-url="mysql://<db-username>:<db-password>@localhost/<db-name>"

8) Régler les permissions
Revenir à la racine de votre répertoir de développement
cd ../..
Le répertoire mda34 doit appartenir au user sous lequel vous êtes connecté et au group du serveur apache.
Sur ubuntu, passer la commande suivante :
sudo chown -R <username>:www-data mda34
puis
sudo chmod -R 770 mda34

9) Créer un vhost Apache.
créer un vhost www.mda34.dev avec un alias *.mda34.dev
Le vhost doit pointer sur le répertoire .../mda34/www
Ce qui donne par exemple pour ubuntu 14.04 un fichier mda34.conf contenant :

-----
<VirtualHost *:80>
  ServerAdmin webmaster@localhost
  ServerName www.mda34.dev
  ServerAlias *.mda34.dev

  DocumentRoot /path/to/your/dev/folder/mda34/www

  ErrorLog ${APACHE_LOG_DIR}/error.log
  CustomLog ${APACHE_LOG_DIR}/access.log combined
</VirtualHost>
-----

10) Paramétrage des répertoires /tmp et /sites/all/translations
Dans le navigateur, aller sur les pages suivantes et enregistrez-les :
http://www.mda34.dev/admin/config/media/file-system
et
http://www.mda34.dev/admin/config/regional/language/update

11) Importation des traductions françaises
Aller sur la page /admin/config/regional/translate/update et cliquer sur "Check manually".
Une fois la vérification terminée, la langue French étant cochée, cliquer sur Update translations.
Les fichiers de traductions sont téléchargés dans /sites/all/translations, puis importées dans la base de données.

11) Modifications du fichier setttings.php pour le module Domain Access

11a - Décommenter la ligne suivante :
# $cookie_domain = '.example.com';

et remplacer '.example.com' par '.mda34.org';

11b - A la fin du fichier, ajouter les lignes suivantes (requises par domain access) :

/**
 * DOMAIN ACCESS
 * 
 * Add the domain module setup routine.
 */
include DRUPAL_ROOT . '/sites/all/modules/contrib/domain/settings.inc';
/**
 * Skip domain checks
 */
$conf['domain_skip_domain_check'] = TRUE;

12) IMPORTANT ! Copier le fichier settings.php généré par l'installation dans le répertoire "shared".

13) IMPORTANT ! ActiveR le module domain avec drush.
drush en domain --uri=http://www.mda34.org/

Il est important d'activer le module domain via drush et non via l'interface pour que le site par défaut soit bien http://www.mda34.org/
Si l'on active domain depuis la page d'administration des modules, ou si l'on active directement la feature mda_domains, 
alors le domaine par défaut sera le domaine sur lequel on se trouve, soit http://www.mda34.dev/

14) Activez ensuite les différentes features du projet MDA34 sur la page /admin/structure/features

15) Développez !

