///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.9.0 Sep 14 2021)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/textctrl.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/button.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/statbox.h>
#include <wx/tglbtn.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class FramePrincipal
///////////////////////////////////////////////////////////////////////////////
class FramePrincipal : public wxFrame
{
	private:

	protected:
		wxTextCtrl* m_textCtrlListeClients;
		wxStaticText* m_staticText1;
		wxTextCtrl* m_textCtrlNom;
		wxStaticText* m_staticText2;
		wxTextCtrl* m_textCtrlPrenom;
		wxStaticText* m_staticText3;
		wxTextCtrl* m_textCtrlBadge;
		wxButton* m_buttonEnvoyer;
		wxButton* m_buttonDelete;
		wxToggleButton* m_toggleBtn1;
		wxButton* m_button1;

		// Virtual event handlers, override them in your derived class
		virtual void ButtonModifyUser( wxCommandEvent& event ) { event.Skip(); }
		virtual void ButtonDeleteUser( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnAlarmToggleButton( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnButtonFinClick( wxCommandEvent& event ) { event.Skip(); }


	public:

		FramePrincipal( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("CodeLite 14 wxFB 3.9 wxW 3.0"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1200,800 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~FramePrincipal();

};

