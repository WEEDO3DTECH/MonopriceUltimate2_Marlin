/**
* Copyright (C) 2019 WEEDO3D
* Author: perron@163.com
*/

/**
* 多国语言字符定义
* 数组中元素对应语言如下：
* 0 - EN
* 1 - CN
* 2 - FR
* 3 - DE
* 4 - ES
* 5 - IT
* 6 - KANA
* 7 - PT
* 8 - NL
* 9 - RU
* 10 - TR
*/

#ifndef LANGUAGE_MULTI_H
#define LANGUAGE_MULTI_H

const char MWELCOME_MSG[7][20] PROGMEM = {
	" Ready.",
	"\xa4\xa5\xa6\xa7",			// 准备就绪
	" prete.",
	" bereit" ,
	" lista.",
	" pronto.",
	" ready."
};

const char MMSG_WATCH [7][20] PROGMEM = {	
	"Info screen",
	"\xec\xed\xee\xef",			// 信息界面 
	"Surveiller",
	"Info" ,
	"Informacion",
	"Guarda" ,
	"\xbc\xde\xae\xb3\xce\xb3\xb6\xde\xd2\xdd"
	};

const char MMSG_PREPARE[7][20] PROGMEM = {
	"Prepare",
	"\xa4\xa5\xee\xef",			// 准备界面		
	"Preparer",
	"Vorbereitung" ,
	"Preparar",
	"Prepara",
	"\xbc\xde\xad\xdd\xcb\xde\xbe\xaf\xc3\xb2"
};

const char MMSG_CONTROL[7][20] PROGMEM = {
	"Control",
	"\xd8\xd9\xee\xef",			// 控制界面		
	"Controler",
	"Einstellungen" ,
	"Control",
	"Controllo",
	"\xba\xdd\xc4\xdb\xb0\xd9"                                     // "ｺﾝﾄﾛｰﾙ" ("Control")
	//"\xbe\xb2\xb7\xde\xae"
};

const char MMSG_CARD_MENU[7][20] PROGMEM = {
	"Print from SD",
	"SD\xa8\xee\xef",			// SD卡界面		
	"Impr. depuis SD",
	"SD-Karte" ,
	"Menu de SD",
	"Stampa da SD",
	"SD\xb6\xb0\xc4\xde\xb6\xd7\xcc\xdf\xd8\xdd\xc4"
};

const char MMSG_FILAMENTIN[7][22] PROGMEM = {
	"Auto Feed Filament",
	"\xe4\xab\x92\x94     ",			// 载入料丝		
	"Charge filament",
	"Filament laden" ,
	"entrada de filamento",
	"Carica filamento",
	"\xcc\xb2\xd7\xd2\xdd\xc4\x20\xb2\xdd"
};

const char MMSG_FILAMENTOUT[7][22] PROGMEM = {
	"Auto Retract Filament",
	"\x93\xe4\x92\x94     ",			// 卸载料丝		
	"Decharger le filament",
	"Filament entladen" ,
	"salida de filamento",
	"Scarica Filament",
	"\xcc\xb2\xd7\xd2\xdd\xc4\x20\xb1\xb3\xc4"
};

const char MMSG_MOVE_AXIS[7][20] PROGMEM = {
	"Move axis",
	"\xc1\xb2\xce",			// 移动轴		
	"Deplacer un axe",
	"Bewegen" ,
	"Mover ejes",
	"Muovi Asse",
	"\xbc\xde\xb8\xb2\xc4\xde\xb3"
};

const char MMSG_AUTO_HOME[7][20] PROGMEM = {
	"Auto home",
	"\xbb\xbc\xbd",			// 回原点	
	"Origine auto.",
	"Home" ,
	"Auto Inicio",
	"Auto Home",
	"\xb9\xde\xdd\xc3\xdd\xcc\xaf\xb7"
};

const char MMSG_LEVEL_BED[7][20] PROGMEM = {
	"Level bed",
	"\xc4\xc7\xcf\xd0",			// 热床调平		
	"Regl. Niv. lit",
	"Bett nivellieren" ,
	"Nivelar plataforma",
	"Livella piano",
	"\xcd\xde\xaf\xc4\xde\xda\xcd\xde\xd8\xdd\xb8\xde"
};

const char MMSG_DISABLE_STEPPERS[7][22] PROGMEM = {
	"Disable steppers",
	"\xb5\xb6\xb7\xb8\xb9\xba",			// 关闭步进电机
	"Arreter moteurs",
	"Motoren deaktivieren" ,
	"Apagar motores",
	"Disabilita Motori",
	"\xd3\xb0\xc0\xb0\xc3\xde\xdd\xb9\xde\xdd\x20\xb5\xcc"
};

const char MMSG_WELCOME_MENU[7][20] PROGMEM = {
	"Wizard",
	"\xa2\xa3\xee\xef",			// 向导界面		
	"sorcier",
	"Magier" ,
	"Wizzard",
	"Procedura Guidata",
	"\xb3\xb4\xb9\xb6"				// ウエルカム
};

const char MMSG_MAIN[7][20] PROGMEM = {
	"Main",
	"\xae\xaf\xb0",			// 主菜单 		
	"Menu principal",
	"Hauptmenu" ,
	"Menu principal",
	"Menu principale",
	"\xd2\xb2\xdd"
};

const char MMSG_TEMPERATURE[7][20] PROGMEM = {
	"Temperature",
	"\xc9\xd2\xbe\xbf",			// 温度设置		
	"Temperature",
	"Temperatur" ,
	"Temperatura",
	"Temperatura",
	"\xb5\xdd\xc4\xde"
};

const char MMSG_ZPROBE_ZOFFSET[7][20] PROGMEM = {
	"Z Offset Setting",
	"\xbe\xbfZ\xce\xc0\xc1",			// 设置Z轴偏移 		
	"Decalage Z",
	"Z Versatz" ,
	"Desfase Z",
	"Z Offset",
	"Z\xb5\xcc\xbe\xaf\xc4"
};

const char MMSG_NETWORK_MENU[7][20] PROGMEM = {
	"Wifi Network",
	"\x99\x9a\xbe\xbf",			// 网络设置 		
	"Reseau Wifi",
	"WiFi-Netzwerk" ,
	"red Wifi",
	"Rete Wifi",
	"Wifi Network"
};

const char MMSG_NETWORK_IP[7][220] PROGMEM = {
	"Show IP",
	"\x97\x98\x99\x9aIP\x9b\x9c",			// 显示网络IP地址 		
	"Afficher l'adresse IP",
	"IP-Adresse anzeigen" ,
	"Mostrar direccion IP",
	"Mostra indirizzo IP",
	"Show IP"
};

const char MMSG_NETWORK_INFO[7][20] PROGMEM = {
	"Wifi Device Info",
	"\x97\x98Wifi\xbe\xa5\xec\xed",			// 显示Wifi设备信息 		
	"Info appareil",
	"WLAN-Gerateinfo" ,
	"dispositivo wifi",
	"informazioni wifi",
	"Wifi Device Info"
};

const char MMSG_NETWORK_CONFIG[7][22] PROGMEM = {
	"Connect to Wifi",
	"\xbe\xbfWifi\x99\x9a      ",			// 设置wifi网络 		
	"Se connecter au Wifi",
	"Verbinden Sie Wifi" ,
	"Conectarse a wifi",
	"Connetti a Wifi",
	"Connect to Wifi"
};

const char MMSG_NETWORK_OTA[7][22] PROGMEM = {
	"Wifi OTA Update",
	"Wifi\xbe\xa5OTA",			// Wifi设备OTA 		
	"Mise a jour Wifi OTA",
	"Wifi OTA Update" ,
	"dispositivo wifi ota",
	"Aggiornamento OTA",
	"Wifi OTA Update"
};

const char MMSG_NETWORK_CONFIG_1[7][22] PROGMEM = {
	"Open the App",
	"\xca\xb3 APP \xb8\xabWIFI\xbe\xbf",			// 打开APP进入WIFI设置 		
	"Ouvrez l'application",
	"Offnen Sie die App" ,
	"Abre la aplicacion",
	"Apri l'app",
	"Open the App"
};

const char MMSG_NETWORK_CONFIG_2[7][22] PROGMEM = {
	"Goto Wifi Setting",
	"  \x8a\xabWifi\x99\x9a\x88\x89",			// 输入WIFI网络密码 		
	"Aller au menu wifi",
	"Zum Wifi-Menu" ,
	"en configuracion wifi",
	"Vai al menu Wifi",
	"Goto Wifi Setting"
};

const char MMSG_NETWORK_CONFIG_3[7][22] PROGMEM = {
	"Input Wifi Password",
	"  \x9d\x85\x86\x87 5G Wifi",			// 不要使用5G Wifi 		
	"Saisir mot de passe",
	"Passwort eingeben" ,
	"Contrasena de entrada",
	"Inserire password",
	"Input Wifi Password"
};

const char MMSG_NETWORK_CONFIG_4[7][22] PROGMEM = {
	"5G Wifi not support",
	" ",					
	"pas utiliser 5G Wifi",
	"kein 5G Wifi" ,
	"Wifi 5G no soporta",
	"5G Wifi non supporta",
	"5G Wifi not support"
};

const char MMSG_NETWORK_OTA_MENU[7][22] PROGMEM = {
	"OTA UPDATING...",
	"OTA UPDATING...",			// 不要关闭电源		
	"MISE A JOUR OTA ...",
	"OTA AKTUALISIEREN ..." ,
	"OTA ACTUALIZANDO ...",
	"AGGIORNAMENTO OTA ...",
	"OTA UPDATING..."
};

const char MMSG_NETWORK_OTA_1[7][22] PROGMEM = {
	"Don't turn off power",
	"\x9d\x85\xb5\xb6\xb9\xcb",			// 不要关闭电源		
	"ne pas eteindre",
	"Macht weiter so" ,
	"No apague el poder",
	"continua ad accendere",
	"Don't turn off power"
};

const char MMSG_NETWORK_OTA_2[7][20] PROGMEM = {
	"Wait a minute",
	" ",				
	"Attends une minute",
	"Warte eine Minute" ,
	"Espera un minuto",
	"Apetta un minuto",
	"Wait a minute"
};

const char MMSG_UPLOADING_1[7][22] PROGMEM = {
	"Downloading:",
	"\x82\x83\x84\xe4      ",			// 正在下载	
	"Telechargement:",
	"Wird heruntergeladen:" ,
	"Descargando:",
	"Download:",
	"Downloading:"
};

const char MMSG_UPLOADING_FAIL[7][20] PROGMEM = {
	"Download Fail",
	"\x84\xe4\x9f\x9e       ",			// 下载失败		
	"Echouer",
	"Scheitern" ,
	"Error de descarga",
	"Scarica Fail",
	"Download Fail"
};

const char MMSG_LANGUAGE_MENU[7][20] PROGMEM = {
	"Language",
	"\x80\x81\xbe\xbf       ",			// 语言设置		
	"La langue",
	"Sprache" ,
	"Idioma",
	"Linguaggio",
	"Language"
};

const char MMSG_LANGUAGE_EN[7][20] PROGMEM = {
	"English",
	"English",					
	"Anglaise",
	"Englisch" ,
	"Ingles",
	"Inglese",
	"English"
};

const char MMSG_LANGUAGE_CN[7][20] PROGMEM = {
	"Chinese",
	"Chinese",				
	"Chinoise",
	"Chinesisch" ,
	"Chino",
	"Cinese",
	"Chinese"
};

const char MMSG_LANGUAGE_FR[7][20] PROGMEM = {
	"French",
	"French",				
	"Francaise",
	"Franzosisch" ,
	"Frances",
	"Francese",
	"French"
};

const char MMSG_LANGUAGE_DE[7][20] PROGMEM = {
	"German",
	"German",					
	"Allemande",
	"Deutsche" ,
	"Aleman",
	"Tedesca",
	"German"
};

const char MMSG_LANGUAGE_ES[7][20] PROGMEM = {
	"Spanish",
	"Spanish",					
	"Espanol",
	"Spanisch" ,
	"Espanola",
	"Spagnola",
	"Spanish"
};

const char MMSG_LANGUAGE_IT[7][20] PROGMEM = {
	"Italian",
	"Italian",				
	"Italienne",
	"Italienisch" ,
	"Italiano",
	"Italiana",
	"Italian"
};

const char MMSG_LANGUAGE_KANA[7][20] PROGMEM = {
	"Japanese",
	"Japanese",
	"Japonais",
	"Japanisch" ,
	"Japonesa",
	"Giapponese",
	"Japanese"
};

const char MMSG_MACHINE_INFO[7][20] PROGMEM = {
	"Machine Info",
	"\xbe\xa5\xec\xed     ",			// 设备信息	
	"Information",
	"Maschineninfo" ,
	"Informacion",
	"Informazione",
	"Machine Info"
};

const char MMSG_INFO_MACHINE[7][20] PROGMEM = {
	"Machine: ",
	"\xbe\xa5: ",			// 设备	
	"Machine: ",
	"Maschine: " ,
	"Maquina: ",
	"Macchina: ",
	"Machine: "
};

const char MMSG_INFO_VERSION[7][20] PROGMEM = {
	"Version: ",
	"\x95\x96: ",			// 版本	
	"Version: ",
	"Ausfuhrung: " ,
	"Version: ",
	"Versione: ",
	"Version: "
};

const char MMSG_RESTORE_DEFAULT[7][20] PROGMEM = {
	"Restore default",
	"\xe7\xe8\xad\xe9\xbe\xbf",			// 恢复出厂设置	
	"Restaurer defauts",
	"Standardwerte laden" ,
	"Restaurar memoria",
	"Ripristina imp.",
	"\xbe\xaf\xc3\xb2\xd8\xbe\xaf\xc4"
};

const char MMSG_PRINT_PAUSED[7][20] PROGMEM = {
	"Print paused",
	"\xca\xf3\xf1\xf2",			// 打印暂停	
	"Impr. en pause",
	"Druck pausiert" ,
	"pausar impresion",
	"Stampa sospesa",
	"Print paused"
};

const char MMSG_PRINTING[7][20] PROGMEM = {
	"Printing...",
	"\xca\xf3...",			// 打印	
	"Impression...",
	"Drucken..." ,
	"impresion...",
	"Stampa...",
	"Printing..."
};

const char MMSG_WELCOME_SCREEN_1[7][14] PROGMEM = {
	"Welcome",
	"Welcome",			
	"Bienvenue",
	"Willkommen" ,
	"Bienvenido",
	"Benvenuto",
	"Welcome"				// ウエルカム
};

const char MMSG_WELCOME_SCREEN_2[7][22] PROGMEM = {
	"STEP1:LOAD FILAMENT",
	"\x90 1 \xb7 \xe4\xab\x92\x94",			// 第1步 载入料丝	
	"1 FILAMENT DE CHARGE",
	"1 FILAMENT LADEN" ,
	"1 Filamento de carga",
	"1 FILAMENTO DI CARICO",
	"STEP1:LOAD FILAMENT"
};

const char MMSG_WELCOME_SCREEN_3[7][22] PROGMEM = {
	"STEP2:INSERT SD CARD",
	"\x90 2 \xb7 \xaa\xabSD\xa8",			// 第2步 插入SD卡	
	"2 INSERER CARTE SD",
	"2 ERKANNT SD-KARTE" ,
	"2 Insertar tarjeta SD",
	"2 INSERITA SD CARD",
	"STEP2:INSERT SD CARD"
};

const char MMSG_WELCOME_SCREEN_4[7][22] PROGMEM = {
	"STEP3:CHOICE FILE",
	"\x90 3 \xb7 \xca\xf3SD\xa8\x8b\x8c",			// 第3步 打印SD卡文件	
	"3 DOSSIER DE CHOIX",
	"3 WAHLDATEI" ,
	"3 Archivo de eleccion",
	"3 FILE DI SCELTA",
	"STEP3:CHOICE FILE"
};

const char MMSG_WELCOME_CONINUE[7][12] PROGMEM = {
	"Next",
	"\xf4\xf5",			// 继续	
	"Continuer",
	"Fortsetzen" ,
	"Continuar",
	"Continua",
	"Next"
};

const char MMSG_WELCOME_SKIP[7][10] PROGMEM = {
	"Quit",
	"\xb5\xb6",			// 跳过
	"Quitter",
	"Verlassen" ,
	"Dejar",
	"Smettere",
	"Quit"
};

const char MMSG_FILAMENT_CHANGE_INIT_1[7][20] PROGMEM = {
	"Wait for start",
	"\xfc\xfd\xb3\xb4     ",			// 等待开始	
	"Attente Demarrage",
	"Warte auf den" ,
	"Esperando iniciar",
	"Attendere avvio",
	"\xba\xb3\xb6\xdd\xa6\xb6\xb2\xbc\xbc\xcf\xbd"
};

const char MMSG_FILAMENT_CHANGE_INIT_2[7][20] PROGMEM = {
	"of the filament",
	"\x92\x94  ",			// 料丝	
	"du filament",
	"Start des" ,
	"del filamento",
	"del cambio",
	"\xbc\xca\xde\xd7\xb8\xb5\xcf\xc1\xb8\xc0\xde\xbb\xb2"
};

const char MMSG_FILAMENT_CHANGE_INIT_3[7][20] PROGMEM = {
	"change",
	"\xfe\xff  ",			// 操作	
	"changer",
	"Filamentwechsels" ,
	"cambiar",
	"di filamento",
	" "
};

const char MMSG_FILAMENT_CHANGE_UNLOAD_1[7][20] PROGMEM = {
	"Wait for",
	"\xfc\xfd  ",			// 等待	
	"Attente de",
	"Warte auf" ,
	"Esperado por",
	"Attendere",
	"\xcc\xa8\xd7\xd2\xdd\xc4\xc7\xb7\xc0\xde\xbc\xc1\xad\xb3"
};

const char MMSG_FILAMENT_CHANGE_UNLOAD_2[7][20] PROGMEM = {
	"filament unload",
	"\x93\xe4\x92\x94     ",				
	"decharger filament",
	"Herausnahme" ,
	"filamento expulsado",
	"l'espulsione",
	"\xbc\xca\xde\xd7\xb8\xb5\xcf\xc1\xb8\xc0\xde\xbb\xb2"
};

const char MMSG_FILAMENT_CHANGE_UNLOAD_3[7][20] PROGMEM = {
	" ",
	" ",
	" ",
	"des Filaments..." ,
	" ",
	"del filamento",
	" "
};

const char MMSG_FILAMENT_CHANGE_INSERT_1[7][20] PROGMEM = {
	"Insert filament",
	"\xaa\xab\x92\x94       ",			// 插入料丝	
	"Inserer filament",
	"Filament einlegen" ,
	"Inserte filamento",
	"Inserisci il",
	"\xcc\xa8\xd7\xd2\xdd\xc4\xa6\xbf\xb3\xc6\xad\xb3\xbc,"
};

const char MMSG_FILAMENT_CHANGE_INSERT_2[7][20] PROGMEM = {
	"and press button",
	"\x8d\x8e\x8f\xf4\xf5       ",			// 并按键	
	"et app. bouton",
	"und Knopf" ,
	"y presione el boton",
	"filamento e",
	"\xb8\xd8\xaf\xb8\xbd\xd9\xc4\xbf\xde\xaf\xba\xb3\xbc\xcf\xbd"
};

const char MMSG_FILAMENT_CHANGE_INSERT_3[7][20] PROGMEM = {
	"to continue...",
	" ",				
	"pour continuer...",
	"drucken..." ,
	"para continuar...",
	"premi per cont",
	" "
};

const char MMSG_FILAMENT_CHANGE_HEAT_1[7][22] PROGMEM = {
	"Press button to",
	"\x8e\x8f\xb3\xb4     ",			// 按键	
	"Presser le bouton...",
	"Knopf drucken um" ,
	"Oprima boton para",
	"Premi per",
	"Press button to"
};

const char MMSG_FILAMENT_CHANGE_HEAT_2[7][22] PROGMEM = {
	"heat nozzle.",
	"\xc3\xc4\xd3\xd4     ",			// 预热喷嘴	
	"Pr chauffer la buse",
	"Duse aufzuheizen." ,
	"Calentar la boquilla",
	"riscald ugello.",
	"heat nozzle."
};

const char MMSG_FILAMENT_CHANGE_HEATING_1[7][20] PROGMEM = {
	"Heating nozzle",
	"\xc3\xc4\xd3\xd4     ",			// 预热喷嘴	
	"Buse en chauffe",
	"Duse heizt auf..." ,
	"Calentando boquilla",
	"Riscald. ugello",
	"Heating nozzle"
};

const char MMSG_FILAMENT_CHANGE_HEATING_2[7][20] PROGMEM = {
	"Please wait...",
	"\xfc\xfd...    ",			// 等待	
	"Patientez SVP...",
	"Bitte warten..." ,
	"Espere por favor",
	"Attendere...",
	"Please wait..."
};

const char MMSG_FILAMENT_CHANGE_LOAD_1[7][20] PROGMEM = {
	"Wait for",
	"\xfc\xfd  ",			// 等待	
	"Attente de",
	"Warte auf" ,
	"Esperado por",
	"Attendere",
	"\xcc\xa8\xd7\xd2\xdd\xc4\xbf\xb3\xc3\xdd\xc1\xad\xb3"
};

const char MMSG_FILAMENT_CHANGE_LOAD_2[7][20] PROGMEM = {
	"filament load",
	"\xe4\xab\x92\x94     ",			
	"chargement filament",
	"Laden des" ,
	"Cargar filamento",
	"il caricamento",
	"\xbc\xca\xde\xd7\xb8\xb5\xcf\xc1\xb8\xc0\xde\xbb\xb2"
};

const char MMSG_FILAMENT_CHANGE_LOAD_3[7][20] PROGMEM = {
	" ",
	" ",
	" ",
	" " ,
	" ",
	"del filamento",
	" "
};

const char MMSG_FILAMENT_CHANGE_PURGE_1[7][20] PROGMEM = {
	"Wait for",
	" ",			
	"Attente",
	"Warte auf" ,
	" ",
	"Attendere",
	"Wait for"
};

const char MMSG_FILAMENT_CHANGE_PURGE_2[7][20] PROGMEM = {
	"filament purge",
	"\xfc\xfd\xe4\xab   ",			// 等待载入
	"Purger filament",
	"Entleeren des" ,
	"esperando carga",
	"lo spurgo",
	"filament purge"
};

const char MMSG_FILAMENT_CHANGE_PURGE_3[7][20] PROGMEM = {
	" ",
	" ",			
	" ",
	"Filaments" ,
	" ",
	"del filamento",
	" "
};

const char MMSG_FILAMENT_CHANGE_RESUME_1[7][20] PROGMEM = {
	"Wait for print",
	"\xfc\xfd  ",			// 等待	
	"Attente impression",
	"Warte auf" ,
	"Esperando imp.",
	"Attendere",
	"\xcc\xdf\xd8\xdd\xc4\xa6\xbb\xb2\xb6\xb2\xbc\xcf\xbd"
};

const char MMSG_FILAMENT_CHANGE_RESUME_2[7][20] PROGMEM = {
	"to resume",
	"\xe7\xe8\xca\xf3    ",			// 继续打印	
	"pour reprendre",
	"Fortsetzung des" ,
	"para resumir",
	"la ripresa",
	"\xbc\xca\xde\xd7\xb8\xb5\xcf\xc1\xb8\xc0\xde\xbb\xb2"
};

const char MMSG_FILAMENT_CHANGE_RESUME_3[7][20] PROGMEM = {
	" ",
	" ",			
	" ",
	"Druckes..." ,
	" ",
	"della stampa"
	" "
};

const char MMSG_ZPROBE_TITLE[7][20] PROGMEM = {
	"Adjust Z Offset(mm)",
	"Z\xce\xc0\xc1(mm)",			// 设置Z偏移	
	"Decalage Z (mm)",
	"Z-Versatz (mm)" ,
	"Ajuste Z Offset(mm)",
	"Offset Z (mm)",
	"Adjust Z Offset(mm)"
};

const char MMSG_FILAMENT_CHANGE_HEADER_PAUSE[7][20] PROGMEM = {
	"PRINT PAUSED",
	"\xca\xf3\xf1\xf2     ",			// 打印暂停	
	"IMPR. PAUSE",
	"DRUCK PAUSIERT" ,
	"IMPR. PAUSADA",
	"STAMPA IN PAUSA",
	"PRINT PAUSED"
};

const char MMSG_FILAMENT_CHANGE_OPTION_HEADER[7][20] PROGMEM = {
	"RESUME OPTIONS:",
	"\xf4\xf5\xfe\xff     ",			// 继续操作	
	"OPTIONS REPRISE:",
	"FORTS. OPTIONEN:" ,
	"OPC. REINICIO:",
	"OPZIONI:",
	"RESUME OPTIONS:"
};

const char MMSG_FILAMENT_CHANGE_OPTION_PURGE[7][20] PROGMEM = {
	"Purge more",
	"\xe4\xab\xe0\xe1\x92\x94",			// 载入更多料丝	
	"Purger encore",
	"Mehr entleeren" ,
	"carga mas",
	"Libera di piu",
	"Purge more"
};

const char MMSG_FILAMENT_CHANGE_OPTION_RESUME[7][20] PROGMEM = {
	"Continue",
	"\xf4\xf5",			// 继续	
	"Reprendre impr.",
	"Drucke weiter" ,
	"Resumir imp.",
	"Riprendi stampa",
	"\xcc\xdf\xd8\xdd\xc4\xbb\xb2\xb6\xb2"
};

const char MMSG_FILAMENT_CHANGE_NOZZLE[7][20] PROGMEM = {
	"  Nozzle: ",
	" \xd3\xd4\xc9\xd2:",			// 喷嘴温度
	"  Buse: ",
	"  Duse: " ,
	"Injector:",
	"  Ugello: ",
	"  Nozzle: "
};

const char MMSG_ERR_HOMING_FAILED[7][20] PROGMEM = {
	"Homing failed",
	"\xbb\xbc\xbd\x9f\x9e",			// 回原点失败
	"Echec origine",
	"Homing gescheitert" ,
	"homing fallo",
	"Home fallito",
	"Homing failed"
};

const char MMSG_ERR_PROBING_FAILED[7][20] PROGMEM = {
	"Probing failed",
	"\xb1\xb2\xcf\xd0\x9f\x9e",			// 自动调平失败
	"Echec sonde",
	"Probing gescheitert" ,
	"el sondeo fallo",
	"Probing fallito",
	"Probing failed"
};

const char MMSG_SD_INSERTED[7][20] PROGMEM = {
	"Card inserted",
	"\xa8\xa9\xaa\xab",			// 卡已插入
	"Carte inseree",
	"SD-Karte erkannt" ,
	"Tarjeta insertada",
	"SD Card inserita",
	"\xb6\xb0\xc4\xde\xb6\xde\xbf\xb3\xc6\xad\xb3\xbb\xda\xcf\xbc\xc0"
};

const char MMSG_SD_REMOVED[7][20] PROGMEM = {
	"Card removed",
	"\xa8\xa9\xac\xad",			// 卡已拔出
	"Carte retiree",
	"SD-Karte entfernt" ,
	"Tarjeta extraida",
	"SD Card rimossa",
	"\xb6\xb0\xc4\xde\xb6\xde\xb1\xd8\xcf\xbe\xdd"
};

const char MMSG_MOVE_X[7][20] PROGMEM = {
	"Move X",
	"\xc1\xb2 X",			// 移动X
	"Depl. X",
	"Verschiebe X" ,
	"Mover X",
	"Muovi X",
	"X\xbc\xde\xb8\x20\xb2\xc4\xde\xb3"
};

const char MMSG_MOVE_Y[7][20] PROGMEM = {
	"Move Y",
	"\xc1\xb2 Y",			// 移动Y
	"Depl. Y",
	"Verschiebe Y" ,
	"Mover Y",
	"Muovi Y",
	"Y\xbc\xde\xb8\x20\xb2\xc4\xde\xb3"
};

const char MMSG_MOVE_Z[7][20] PROGMEM = {
	"Move Z",
	"\xc1\xb2 Z",			// 移动Z
	"Depl. Z",
	"Verschiebe Z" ,
	"Mover Z",
	"Muovi Z",
	"Z\xbc\xde\xb8\x20\xb2\xc4\xde\xb3"
};

const char MMSG_MOVE_E[7][20] PROGMEM = {
	"Extruder",
	"\xcc\xad\xba",			// 挤出机
	"Extrudeur",
	"Extruder" ,
	"Extrusor",
	"Estrusore",
	"\xb4\xb8\xbd\xc4\xd9\xb0\xc0\xde\xb0"
};

const char MMSG_MOVE_01MM[7][20] PROGMEM = {
	"Move 0.1mm",
	"\xc1\xb2 0.1mm",			// 移动0.1mm
	"Depl. 0.1mm",
	"0.1mm" ,
	"Mover 0.1mm",
	"Muovi di 0.1mm",
	"0.1mm \xb2\xc4\xde\xb3"
};

const char MMSG_MOVE_1MM[7][20] PROGMEM = {
	"Move 1mm",
	"\xc1\xb2 1mm",			// 移动1mm
	"Depl. 1mm",
	"1mm" ,
	"Mover 1mm",
	"Muovi di 1mm",
	"  1mm \xb2\xc4\xde\xb3"
};

const char MMSG_MOVE_10MM[7][20] PROGMEM = {
	"Move 10mm",
	"\xc1\xb2 10mm",			// 移动10mm
	"Depl. 10mm",
	"10mm" ,
	"Mover 10mm",
	"Muovi di 10mm",
	" 10mm \xb2\xc4\xde\xb3"
};

const char MMSG_TUNE[7][12] PROGMEM = {
	"Tune",
	"\xcf\xf0",			// 调整
	"Regler",
	"Justierung" ,
	"Ajustar",
	"Regola",
	"\xc1\xae\xb3\xbe\xb2"
};

const char MMSG_PAUSE_PRINT[7][18] PROGMEM = {
	"Pause print",
	"\xf1\xf2\xca\xf3",			// 暂停打印
	"Interrompre impr.",
	"SD-Druck Pause" ,
	"Pausar impresion",
	"Pausa",
	"\xb2\xc1\xbc\xde\xc3\xb2\xbc"
};

const char MMSG_RESUME_PRINT[7][22] PROGMEM = {
	"Resume print",
	"\xf4\xf5\xca\xf3",			// 继续打印
	"Reprendre impr.",
	"SD-Druck Fortsetzung" ,
	"Reanudar impresion",
	"Riprendi stampa",
	"\xcc\xdf\xd8\xdd\xc4\xbb\xb2\xb6\xb2"
};

const char MMSG_STOP_PRINT[7][20] PROGMEM = {
	"Stop print",
	"\xf2\xf6\xca\xf3",			// 停止打印
	"Arreter impr.",
	"SD-Druck Abbruch" ,
	"Detener impresion",
	"Arresta stampa",
	"\xcc\xdf\xd8\xdd\xc4\xc3\xb2\xbc"
};

const char MMSG_NO_CARD[7][18] PROGMEM = {
	"No SD card",
	"\xf9\xa8",			// 无卡
	"Pas de carte",
	"Keine SD-Karte" ,
	"No hay tarjeta SD",
	"SD non presente",
	"SD\xb6\xb0\xc4\xde\xb6\xde\xb1\xd8\xcf\xbe\xdd"
};

const char MMSG_SPEED[7][10] PROGMEM = {
	"Speed",
	"\xd1\xd2",			// 速度
	"Vitesse",
	"Geschw." ,
	"Velocidad",
	"Velocita",
	"\xbf\xb8\xc4\xde"
};

const char MMSG_NOZZLE[7][10] PROGMEM = {
	"Nozzle",
	"\xd3\xd4",			// 喷嘴
	"Buse",
	"Duse" ,
	"Boquilla",
	"Ugello",
	"\xc9\xbd\xde\xd9"
};

const char MMSG_BED[7][12] PROGMEM = {
	"Bed",
	"\xc4\xc7",			// 热床
	"Lit",
	"Bett" ,
	"Plataforma",
	"Piatto",
	"\xcd\xde\xaf\xc4\xde"
};

const char MMSG_FAN_SPEED[7][18] PROGMEM = {
	"Fan speed",
	"\xd5\xd6\xd1\xd2",			// 风扇速度
	"Vitesse ventil.",
	"Lufter" ,
	"Ventilador",
	"Velocita ventola",
	"\xcc\xa7\xdd\xbf\xb8\xc4\xde"
};

const char MMSG_FLOW[7][12] PROGMEM = {
	"Flow",
	"\xcc\xad\xd1\xd2",			// 挤出速度
	"Flux",
	"Flussrate" ,
	"Flujo",
	"Flusso",
	"\xc4\xbc\xad\xc2\xd8\xae\xb3"
};


const char MMSG_POWER_LOSS_RECOVERY[7][20] PROGMEM = {
	"Power Loss Recovery",
	"\xe7\xe8\xca\xf3",			// 恢复打印
	"Recuperation",
	"Wiederherstellung" ,
	"Recuperacion",
	"Recupero",
	"Power Loss Recovery"
};

const char MMSG_SAVED_OFF[7][22] PROGMEM = {
	"Save Printing and Off",
	"\xe5\xe6\xb5\xba    ",			// 保存关机
	"Enregistrer et hors",
	"Speichern und weg" ,
	"Guardar y fuera",
	"Salva stampa e Off",
	"Save Printing and Off"
};

const char MMSG_SAVED_OFF_1[7][22] PROGMEM = {
	"Wait for printing",
	"\xfc\xfd\xca\xf3\xf2\xf6\x91",			// 等待打印停止后		
	"Attendez que",
	"Warten fur Druckstopp" ,
	"Espere a que se",
	"Attendere fermata",
	"Wait for printing"
};

const char MMSG_SAVED_OFF_2[7][22] PROGMEM = {
	"stop, then turn off",
	"\xb5\xb6\xb9\xcb",			// 关闭电源		
	"l'impression s'arrete",
	"dann Ausschalten" ,
	"detenga la impresion,",
	"la stampa,",
	"stop, then turn off"
};

const char MMSG_SAVED_OFF_3[7][22] PROGMEM = {
	"the power",
	" ",				
	"puis eteignez",
	" " ,
	"luego apague",
	"quindi spegnere",
	"the power"
};

const char MMSG_MOVING[7][18] PROGMEM = {
	"Moving...",
	"\xc1\xb2...",		// 移动
	"Deplacement...",
	"In Bewegung..." ,
	"Moviendo...",
	"In movimento...",
	"\xb2\xc4\xde\xb3\xc1\xad\xb3"                                     // "ｲﾄﾞｳﾁｭｳ" ("Moving...")
};

const char MMSG_FILAMENT_RUNOUT[7][22] PROGMEM = {
	"Filament runout",
	"\xf9\x92\x94",			// 无料丝		
	"Filament vide",
	"Fadenschlag" ,
	"Filamento vacio",
	"Filament eccentricita",
	"Filament runout"
};

const char MMSG_ON[7][18] PROGMEM = {
	"On",
	"\xca\xb3",		// 打开
	"Allumer",
	"Anschalten" ,
	"Encender",
	"Accendere",
	"On"                                     
};

const char MMSG_OFF[7][18] PROGMEM = {
	"Off",
	"\xb5\xb6",		// 关闭
	"Eteindre",
	"Abschalten" ,
	"Apagar",
	"Spegni",
	"On"
};

const char MMSG_FILAMENT_SENSOR[7][22] PROGMEM = {
	"Filament Sensor",
	"\x92\x94\xb3\xb5    ",			// 料丝开关
	"Capteur de filament",
	"Filamentsensor" ,
	"Sensor de filamento",
	"Sensore a filamento",
	"Filament Sensor"
};

const char MMSG_DOOR_OPEN[7][23] PROGMEM = {
	"Door is Open",
	"\xde\x7f\xca\xb3",			// 前门打开
	"La porte est ouverte",
	"Tur ist offen" ,
	"La puerta esta abierta",
	"La porta e aperta",
	"Door is Open"
};

const char MMSG_DOOR_SENSOR[7][22] PROGMEM = {
	"Door Sensor",
	"\xde\x7f\xb3\xb5    ",			// 前门开关
	"Capteur de porte",
	"Tursensor" ,
	"Sensor de puerta",
	"Sensore porta",
	"Door Sensor"
};

const char MMSG_NOTICE_MOVING[7][22] PROGMEM = {
	"Moving...",
	"\x82\x83\xc1\xb2...",			// "正在移动...",
	"En mouvement...",
	"Ziehen um...",
	"Emocionante...",
	"In movimento...",
	"Moving...",
};

const char MMSG_PRE_PAGE[11][22] PROGMEM = {
	"Previous",
	"\xde\xfa\xfb",		// 前一页
	"Precedent",
	"Bisherige",
	"Anterior",
	"Precedente",
	"Previous",
	"Anterior",
	"voorgaand",
	"Onceki",
	"Previous",			//
};

const char MMSG_NEXT_PAGE[11][22] PROGMEM = {
	"Next",
	"\x91\xfa\xfb",			// 后一页
	"Prochain",
	"Nachster",
	"Proximo",
	"Prossimo",
	"Next",
	"Proximo",
	"volgende",
	"Sonraki",
	"Next",			
};

const char MSG_Z_MAX_165[] PROGMEM = {
	"V1(z=165mm)"
};

const char MSG_Z_MAX_170[] PROGMEM = {
	"V2(z=170mm)"
};

#endif // 
