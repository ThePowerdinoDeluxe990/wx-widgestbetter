#pragma once
#include <wx/wx.h>

class MainFrame: public wxFrame
{
public :
	MainFrame(const wxString& title);

private:
	void OnButtonClicked(wxCommandEvent& evt);
	void OnButton1Clicked(wxCommandEvent& evt);
	void OnSliderChanged(wxCommandEvent& evt);
	void OnTextChange(wxCommandEvent& evt);
	
};

