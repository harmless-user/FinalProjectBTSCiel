///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.9.0 Sep 14 2021)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "FramePrincipal.h"

///////////////////////////////////////////////////////////////////////////

FramePrincipal::FramePrincipal( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 400,200 ), wxSize( 1200,1000 ) );

	wxBoxSizer* bSizerPrincipal;
	bSizerPrincipal = new wxBoxSizer( wxHORIZONTAL );

	bSizerPrincipal->SetMinSize( wxSize( 500,600 ) );
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );

	wxStaticBoxSizer* sizerBDD;
	sizerBDD = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Gestion Clients") ), wxVERTICAL );

	wxBoxSizer* bSizer41;
	bSizer41 = new wxBoxSizer( wxVERTICAL );

	m_textCtrlListeClients = new wxTextCtrl( sizerBDD->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	bSizer41->Add( m_textCtrlListeClients, 1, wxALL|wxEXPAND, 5 );


	sizerBDD->Add( bSizer41, 4, wxEXPAND, 5 );

	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );

	m_staticText1 = new wxStaticText( sizerBDD->GetStaticBox(), wxID_ANY, wxT("Nom"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	bSizer8->Add( m_staticText1, 0, wxALL, 5 );

	m_textCtrlNom = new wxTextCtrl( sizerBDD->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_textCtrlNom, 0, wxALL, 5 );


	bSizer6->Add( bSizer8, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxVERTICAL );

	m_staticText2 = new wxStaticText( sizerBDD->GetStaticBox(), wxID_ANY, wxT("Prénom"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	bSizer9->Add( m_staticText2, 0, wxALL, 5 );

	m_textCtrlPrenom = new wxTextCtrl( sizerBDD->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_textCtrlPrenom, 0, wxALL, 5 );


	bSizer6->Add( bSizer9, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxVERTICAL );

	m_staticText3 = new wxStaticText( sizerBDD->GetStaticBox(), wxID_ANY, wxT("Badge"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	bSizer10->Add( m_staticText3, 0, wxALL, 5 );

	m_textCtrlBadge = new wxTextCtrl( sizerBDD->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	bSizer10->Add( m_textCtrlBadge, 0, wxALL, 5 );


	bSizer6->Add( bSizer10, 1, wxEXPAND, 5 );


	bSizer5->Add( bSizer6, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxHORIZONTAL );

	m_buttonEnvoyer = new wxButton( sizerBDD->GetStaticBox(), wxID_ANY, wxT("Envoyer"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer7->Add( m_buttonEnvoyer, 1, wxALL, 5 );

	m_buttonDelete = new wxButton( sizerBDD->GetStaticBox(), wxID_ANY, wxT("Supprimer"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer7->Add( m_buttonDelete, 1, wxALL, 5 );


	bSizer5->Add( bSizer7, 1, wxEXPAND, 5 );


	sizerBDD->Add( bSizer5, 1, wxEXPAND, 5 );


	bSizer3->Add( sizerBDD, 1, wxEXPAND, 5 );


	bSizerPrincipal->Add( bSizer3, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );

	wxStaticBoxSizer* sizerCamera;
	sizerCamera = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Caméra") ), wxHORIZONTAL );


	bSizer4->Add( sizerCamera, 1, wxALIGN_RIGHT|wxEXPAND, 5 );

	wxStaticBoxSizer* sizerSynoptique;
	sizerSynoptique = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Synoptique") ), wxHORIZONTAL );

	m_toggleBtn1 = new wxToggleButton( sizerSynoptique->GetStaticBox(), wxID_ANY, wxT("ALARME"), wxDefaultPosition, wxDefaultSize, 0 );
	sizerSynoptique->Add( m_toggleBtn1, 0, wxALL, 5 );

	m_button1 = new wxButton( sizerSynoptique->GetStaticBox(), wxID_ANY, wxT("Fin du prog."), wxDefaultPosition, wxDefaultSize, 0 );
	sizerSynoptique->Add( m_button1, 0, wxALL, 5 );


	bSizer4->Add( sizerSynoptique, 1, wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizerPrincipal->Add( bSizer4, 2, wxEXPAND, 5 );


	this->SetSizer( bSizerPrincipal );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_buttonEnvoyer->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::ButtonModifyUser ), NULL, this );
	m_buttonDelete->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::ButtonDeleteUser ), NULL, this );
	m_toggleBtn1->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::OnAlarmToggleButton ), NULL, this );
	m_button1->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::OnButtonFinClick ), NULL, this );
}

FramePrincipal::~FramePrincipal()
{
	// Disconnect Events
	m_buttonEnvoyer->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::ButtonModifyUser ), NULL, this );
	m_buttonDelete->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::ButtonDeleteUser ), NULL, this );
	m_toggleBtn1->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::OnAlarmToggleButton ), NULL, this );
	m_button1->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::OnButtonFinClick ), NULL, this );

}
