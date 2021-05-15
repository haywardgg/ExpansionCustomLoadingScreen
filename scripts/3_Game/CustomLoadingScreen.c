const string LOADING_SCREENS_PATH 	= "ExpansionCustomLoadingScreen/Data/LoadingScreens/LoadingImages.json";
const string LOADING_MESSAGES_PATH 	= "ExpansionCustomLoadingScreen/Data/LoadingScreens/LoadingMessages.json";
const string LOADING_SCREEN_LOGO 	= "ExpansionCustomLoadingScreen/Data/LoadingScreens/mylogo.edds";

const bool UseCustomLoadingPictures = true;
const bool UseCustomLoadingMessages = true;
const bool UseCustomLogo 			= true;

modded class LoadingScreen 
{
	void LoadingScreen(DayZGame game)
	{
		if ( UseCustomLoadingPictures )
		{
			JsonFileLoader< ref array< ref ExpansionLoadingScreenBackground > >.JsonLoadFile( LOADING_SCREENS_PATH, m_Backgrounds );
		}

		if ( UseCustomLoadingMessages )
		{
			JsonFileLoader< ref array< ref ExpansionLoadingScreenMessageData > >.JsonLoadFile( LOADING_MESSAGES_PATH, m_MessageJson );
		}
		
		if ( UseCustomLogo )
		{
			m_ImageLogoMid.LoadImageFile( 0, LOADING_SCREEN_LOGO );
			m_ImageLogoCorner.LoadImageFile( 0, LOADING_SCREEN_LOGO );
		}

	};

	override void Show()
	{
		if ( UseCustomLoadingPictures )
		{
			m_Backgrounds.Clear();
			JsonFileLoader< ref array< ref ExpansionLoadingScreenBackground > >.JsonLoadFile( LOADING_SCREENS_PATH, m_Backgrounds );
		}

		if ( UseCustomLoadingMessages )
		{
			m_MessageJson.Clear();
			JsonFileLoader< ref array< ref ExpansionLoadingScreenMessageData > >.JsonLoadFile( LOADING_MESSAGES_PATH, m_MessageJson );
		}
		
		super.Show();

		m_ImageLogoCorner.Show(true);	
		m_ImageLogoMid.Show(false);
		m_ModdedWarning.Show(false);

		if ( m_MessageJson )
		{
			m_MessageRest = m_MessageJson.GetRandomElement();

			m_LoadingMessage.SetText( m_MessageRest.message );
			m_LoadingMessageAuthor.SetText( "#STR_EXPANSION_LOADING_MSG_SUBMITTEDBY" + " " + m_MessageRest.submitter );
		}
		else
		{
			m_LoadingMessage.Show(false);
			m_LoadingMessageAuthor.Show(false);
		}
	};
};
 
modded class LoginQueueBase 
{
	void LoginQueueBase()
	{
		if ( UseCustomLoadingPictures )
		{
			m_Backgrounds.Clear();
			JsonFileLoader< ref array< ref ExpansionLoadingScreenBackground > >.JsonLoadFile( LOADING_SCREENS_PATH, m_Backgrounds );
		}
	};
};
 
modded class LoginTimeBase 
{
	void LoginTimeBase()
	{
		if ( UseCustomLoadingPictures )
		{
			m_Backgrounds.Clear();
			JsonFileLoader< ref array< ref ExpansionLoadingScreenBackground > >.JsonLoadFile( LOADING_SCREENS_PATH, m_Backgrounds );
		}
	};
};