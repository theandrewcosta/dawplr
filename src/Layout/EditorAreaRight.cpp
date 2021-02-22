#include "EditorAreaRight.h"

#include <wx/log.h>
#include <wx/gbsizer.h>

#include "Components/TrackBody.h"

EditorAreaRight::EditorAreaRight(wxWindow* parent)
	: SyncedScrolledWindow(parent)
{
	wxGridBagSizer* gbSizer = new wxGridBagSizer(0, 0);

	for (int i = 0; i < 25; i++)
	{
		TrackBody* trackBody = new TrackBody(this, i);
		trackBody->SetMinSize(wxSize(2000, trackBody->GetVirtualHeight()));
		gbSizer->Add(trackBody, wxGBPosition(i, 0));
	}

	SetSizer(gbSizer);
	FitInside();
	SetScrollRate(10, 10);
}

EditorAreaRight::~EditorAreaRight()
{
}

// void EditorAreaRight::OnSize(wxSizeEvent&)
// {
// 	for (auto child : GetChildren())
// 	{
// 		TrackBody* trackBody = static_cast<TrackBody*>(child);
// 	}

// 	Layout();
// 	AdjustScrollbars();
// }