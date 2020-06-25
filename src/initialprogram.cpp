#include <QApplication>
#include <QMessageBox>
#include <QDir>
#include <QTextStream>
#include <QTranslator>

#include "initialprogram.h"
#include "ui_initialprogram.h"
#include "global.h"
#include "clientdlg.h"
#include "serverdlg.h"
#include "settings.h"
#include "testbench.h"
#include "util.h"

initialprogram::initialprogram(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::initialprogram)
{

    ui->setupUi(this);

    // Main menu bar -----------------------------------------------------------
    pMenu = new QMenuBar ( this );
    pMenu->addMenu ( new CHelpMenu ( this ) );
    /////////////////////////////////////////////////////////////////////////////


}

initialprogram::~initialprogram()
{
    delete ui;

}



void initialprogram::on_client_clicked()
{
    bool         bShowComplRegConnList     = false;
    bool         bShowAnalyzerConsole      = false;
    bool         bNoAutoJackConnect        = false;
    int          iCtrlMIDIChannel          = INVALID_MIDI_CH;
    quint16      iPortNumber               = LLCON_DEFAULT_PORT_NUMBER;
    QString      strConnOnStartupAddress   = "";
    QString      strIniFileName            = "";
    QString      strHTMLStatusFileName     = "";
    QString      strServerName             = "";
    QString      strLoggingFileName        = "";
    QString      strHistoryFileName        = "";
    QString      strRecordingDirName       = "";
    QString      strCentralServer          = "";
    QString      strServerInfo             = "";
    QString      strWelcomeMessage         = "";
    QString      strClientName             = APP_NAME;
    bool bClientByServer = false;
    QString bSalaByServer ;
    QString bPassByServer = "";


    iPortNumber += 10; // increment by 10

    CClient Client ( iPortNumber,
                     strConnOnStartupAddress,
                     iCtrlMIDIChannel,
                     bNoAutoJackConnect,
                     strClientName);

    // load settings from init-file
    CSettings Settings ( &Client, strIniFileName );
    Settings.Load();
    CClientDlg ClientDlg ( &Client,
                           &Settings,
                           strConnOnStartupAddress,
                           bShowComplRegConnList,
                           bShowAnalyzerConsole,
                           nullptr,
                           Qt::Window,
                           bClientByServer,
                           bSalaByServer,
                           bPassByServer);
    // show dialog
//    this->hide();

    ClientDlg.show();
    ClientDlg.exec();

}

void initialprogram::on_server_clicked()
{

#ifdef _WIN32
    // set application priority class -> high priority
    SetPriorityClass ( GetCurrentProcess(), HIGH_PRIORITY_CLASS );

    // For accessible support we need to add a plugin to qt. The plugin has to
    // be located in the install directory of the software by the installer.
    // Here, we set the path to our application path.
    QDir ApplDir ( QApplication::applicationDirPath() );
    pApp->addLibraryPath ( QString ( ApplDir.absolutePath() ) );
#endif

    bool         bStartMinimized           = false;
    bool         bDisconnectAllClients     = false;
    bool         bUseDoubleSystemFrameSize = true; // default is 128 samples frame size
    bool         bCentServPingServerInList = false;
    int          iNumServerChannels        = DEFAULT_USED_NUM_CHANNELS;
    int          iMaxDaysHistory           = DEFAULT_DAYS_HISTORY;
    quint16      iPortNumber               = LLCON_DEFAULT_PORT_NUMBER;
    ELicenceType eLicenceType              = LT_NO_LICENCE;
    QString      strConnOnStartupAddress   = "";
    QString      strIniFileName            = "";
    QString      strHTMLStatusFileName     = "";
    QString      strServerName             = "";
    QString      strLoggingFileName        = "";
    QString      strHistoryFileName        = "";
    QString      strRecordingDirName       = "";
    QString      strCentralServer          = "";
    QString      strServerInfo             = "";
    QString      strWelcomeMessage         = "";

    CServer Server ( iNumServerChannels,
                     iMaxDaysHistory,
                     strLoggingFileName,
                     iPortNumber,
                     strHTMLStatusFileName,
                     strHistoryFileName,
                     strServerName,
                     strCentralServer,
                     strServerInfo,
                     strWelcomeMessage,
                     strRecordingDirName,
                     bCentServPingServerInList,
                     bDisconnectAllClients,
                     bUseDoubleSystemFrameSize,
                     eLicenceType );

    CSettings Settings ( &Server, strIniFileName );
    Settings.Load();

    // update server list AFTER restoring the settings from the
    // settings file
    Server.UpdateServerList();

    // GUI object for the server
    CServerDlg ServerDlg ( &Server,
                           &Settings,
                           bStartMinimized,
                           nullptr,
                           Qt::Window );

    ServerDlg.show();
    ServerDlg.exec();
}

