#pragma once

#include <wx/panel.h>
#include <wx/window.h>

wxDECLARE_EVENT(V_SASH_DRAGGING, wxCommandEvent);

class VSash 
    : public wxPanel 
{
public:
    VSash(wxWindow*);
    ~VSash();
    int GetX();
    void SetX(int);
    int GetWidth();
    void SetWidth(int);
    bool Dragging();
    void OnMouseEvent(wxMouseEvent&);

private:
    int x;
    int y;
    int width;
    bool dragging;
    wxDECLARE_EVENT_TABLE();
};

