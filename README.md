# Interface Homme Machine

TP : 1- Interface Homme Machine
-------------------------------------------------------------------------------------------------------------------------
Exercice 1 : Manipulation de Widgets et Signaux/Slots
  1. Crée un nouveau projet Qt.
  2. Dépose des widgets sur la fenêtre, incluant :
o Un QTextEdit avec les propriétés suivantes :
 frameShape : Panel
 geometry : X :30, Y : 20, Largeur : 262, Hauteur : 71
 readOnly : vrai
o Un QPushButton (Effacer) : texte "Effacer", désactivé au départ (enabled :
faux).
  3. Implémente les signaux/slots :
o Bouton "Fermer" : ferme l'application.
o Bouton "Cliquer" : affiche le texte "c'est mon premier TP en QT" dans le
QTextEdit, active le bouton "Effacer", et désactive "Cliquer".
o Bouton "Effacer" : vide le contenu de QTextEdit, réactive "Cliquer" et
désactive "Effacer".
-------------------------------------------------------------------------------------------------------------------------
Exercice 2 : Barre de Menu et Widgets
  1. Crée un nouveau projet avec le titre de fenêtre "TP N°1".
  2. Ajoute une barre de menus avec les sections "Fichier" et "Edition".
  3. Ajoute un QLabel avec les propriétés :
o Texte au format RichText
o StyleSheet : arrière-plan gris foncé, police Comic Sans MS, taille 14pt.
  4. Implémente les actions de la barre de menu :
o Quitter dans "Fichier" : ferme l'application.
o À propos dans "Fichier" : affiche un label avec le texte "TP du module IHM
2023/2024".
o Gris et Blanc dans "Edition" : change la couleur d'arrière-plan.
-------------------------------------------------------------------------------------------------------------------------
Exercice 3 : Afficher, Copier et Coller
  1. Ajoute deux QLineEdit.
  2. Modifie le menu "Edition" pour y ajouter les items "Afficher", "Copier" et "Coller".
  3. Implémente les actions :
o Afficher : affiche "Bonjour" dans le premier QLineEdit.
o Copier : copie le texte du premier QLineEdit.
o Coller : colle le texte dans le deuxième QLineEdit.
-------------------------------------------------------------------------------------------------------------------------
Exercice 4 : Gestion des fichiers avec QFileDialog
  1. Ajouter un bouton et une zone de texte :
o Ajoute un QPushButton avec le texte "Ouvrir fichier".o Ajoute un QTextEdit en lecture seule pour afficher le contenu du fichier.
  2. Implémentation du signal/slot :
o Lorsque le bouton "Ouvrir fichier" est cliqué, ouvre une boîte de dialogue pour
choisir un fichier texte à partir du disque (QFileDialog).
o Affiche le contenu du fichier sélectionné dans le QTextEdit.
  3. Extension possible :
o Ajouter une option pour enregistrer le contenu modifié du QTextEdit dans un
fichier via un autre bouton "Enregistrer".
------------------------------------------------------------------------------------------------------------------------- 
 Exercice 5 : Utilisation de QComboBox pour sélectionner des éléments
  1. Ajouter une liste déroulante et un label :
o Ajoute un QComboBox avec plusieurs options (par exemple : "Rouge", "Vert",
"Bleu").
o Ajoute un QLabel en dessous pour afficher la couleur sélectionnée.
  2. Implémentation du signal/slot :
o Lorsque l'utilisateur sélectionne une couleur dans le QComboBox, le texte du
QLabel change en fonction de la couleur choisie.
o Le fond du QLabel doit également changer pour refléter la couleur
sélectionnée.
-------------------------------------------------------------------------------------------------------------------------
Exercice 6 : Gestion dynamique de widgets avec QTabWidget
  1. Création d'onglets :
o Crée une interface avec un QTabWidget contenant trois onglets :
 Onglet 1 : Contient un QTextEdit.
 Onglet 2 : Contient deux QPushButton ("Lancer" et "Arrêter") et un
QProgressBar.
 Onglet 3 : Contient un QComboBox et un QLabel.
  2. Implémentation des actions :
o Dans l'onglet 2, utilise les boutons "Lancer" et "Arrêter" pour démarrer et
arrêter la progression de la barre de progression.
o Dans l'onglet 3, change la couleur du texte du QLabel en fonction de l'élément
sélectionné dans le QComboBox.
-------------------------------------------------------------------------------------------------------------------------
Exercice 7 : Interaction avec des dialogues modaux
  1. Ajouter des boutons pour ouvrir des dialogues :
o Ajoute deux boutons : "Paramètres" et "Confirmer".
o Crée une boîte de dialogue (avec QDialog) qui s'ouvre lorsque l'on clique sur
"Paramètres".
  2. Implémentation du signal/slot :
o Lorsque la boîte de dialogue est ouverte, l'utilisateur peut entrer des valeurs
(par exemple, des valeurs numériques).
o Utilise ces valeurs pour modifier l'affichage principal (par exemple, ajuster une
échelle de valeurs ou changer la taille d'un widget).
-------------------------------------------------------------------------------------------------------------------------
Exercice 8 : Utilisation de QTimer pour des événements périodiques1. Ajouter un QLabel et un bouton "Démarrer" :
  1. Ajouter un QLabel et un bouton "Démarrer" :
o Ajoute un QLabel pour afficher l'heure actuelle.
o Ajoute un bouton "Démarrer" pour lancer un compte à rebours.o Ajoute un QLabel pour afficher l'heure actuelle.
o Ajoute un bouton "Démarrer" pour lancer un compte à rebours.
  2. Implémentation du QTimer :
o Utilise QTimer pour mettre à jour le QLabel toutes les secondes avec l'heure
actuelle.
o Lorsque le bouton "Démarrer" est cliqué, le compte à rebours commence et le
QLabel affiche la progression du temps restant.
-------------------------------------------------------------------------------------------------------------------------
Exercice 9 : Création d'un formulaire simple avec validation
  1. Ajouter un formulaire avec des QLineEdit :
o Crée un formulaire simple avec des QLineEdit pour le nom, le prénom, et
l'âge.
  2. Implémentation de la validation :
o Ajoute un bouton "Valider".
o Utilise des signaux/slots pour vérifier que tous les champs sont remplis et que
l'âge est un nombre valide. Si les informations sont correctes, affiche un
message de confirmation ; sinon, affiche un message d'erreur.
  3. Extension possible :
o Ajouter une boîte de dialogue modale qui affiche les informations saisies sous
forme récapitulative avant la validation finale.
-------------------------------------------------------------------------------------------------------------------------
Exercice 10 : Création d'un jeu simple
  1. Ajouter un QPushButton et un QLabel :
o Crée un bouton "Lancer le dé" et un QLabel pour afficher le résultat.
  2. Implémentation du signal/slot :
o Lorsque le bouton "Lancer le dé" est cliqué, génère un nombre aléatoire entre 1
et 6 et affiche le résultat dans le QLabel.
o Le fond du QLabel change de couleur en fonction du résultat obtenu (par
exemple : rouge pour un 1, vert pour un 6).
