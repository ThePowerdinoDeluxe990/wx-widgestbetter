#include "MainFrame.h"
#include <wx/wx.h>


MainFrame::MainFrame(const wxString & title):wxFrame(nullptr,wxID_ANY,title){
	wxPanel* panel = new wxPanel(this);

	wxButton* button1 = new wxButton(panel, wxID_ANY, "alert", wxPoint(300, 300), wxSize(100, 35));
	wxButton* button= new wxButton(panel, wxID_ANY, "boton", wxPoint(150, 50), wxSize(100, 35));
	wxSlider* slider = new wxSlider(panel, wxID_ANY, 0, 0, 100, wxPoint(300, 200), wxSize(200, -1));
	wxTextCtrl* text = new wxTextCtrl(panel, wxID_ANY, " ", wxPoint(300, 375), wxSize(200, -1));

	button1->Bind(wxEVT_BUTTON, &MainFrame::OnButton1Clicked, this);
	button->Bind(wxEVT_BUTTON, &MainFrame::OnButtonClicked, this);
	slider->Bind(wxEVT_SLIDER, &MainFrame::OnSliderChanged, this);
	text->Bind(wxEVT_TEXT, &MainFrame::OnTextChange, this);

	button->Unbind(wxEVT_BUTTON, &MainFrame::OnButtonClicked, this);

	CreateStatusBar();
}
void MainFrame::OnButton1Clicked(wxCommandEvent& evt) {
	wxMessageBox(wxT("Me gustan las tetas"),("Titulo"));

}

void MainFrame::OnButtonClicked(wxCommandEvent& evt) {

	wxString stirng = wxString::Format("Clicks:", evt.GetInt());
	wxLogStatus(stirng);
	
}

void MainFrame::OnSliderChanged(wxCommandEvent& evt) {
	wxString str = wxString::Format("Slider Value: %d", evt.GetInt());
	wxLogStatus(str);
}

void MainFrame :: OnTextChange(wxCommandEvent& evt) {
	wxString str = wxString::Format("Text: %s", evt.GetString());
	wxLogStatus(str);
}
