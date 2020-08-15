#ifndef __VIKING_MENU_XML_H
#define __VIKING_MENU_XML_H

static const char *menu_xml =
	"<ui>"
	"  <menubar name='MainMenu'>"
	"    <menu action='File'>"
	"      <menuitem action='New'/>"
	"      <menuitem action='Open'/>"
	"      <menuitem action='OpenRecentFile'/>"
	"      <menuitem action='Append'/>"
	"      <menuitem action='OpenExtLayer'/>"
	"      <menuitem action='Save'/>"
	"      <menuitem action='SaveAs'/>"
	"      <menuitem action='FileProperties'/>"
	"      <separator/>"
	"      <menu action='Export'>"
	"        <menuitem action='ExportGPX'/>"
	"      </menu>"
	"      <menu action='Acquire'>"
	"        <menuitem action='AcquireRouting'/>"
#ifdef VIK_CONFIG_OPENSTREETMAP
	"        <menuitem action='AcquireOSM'/>"
	"        <menuitem action='AcquireMyOSM'/>"
#endif
#ifdef VIK_CONFIG_GEOCACHES
	"        <menuitem action='AcquireGC'/>"
#endif
#ifdef VIK_CONFIG_GEOTAG
	"        <menuitem action='AcquireGeotag'/>"
#endif
	"        <menuitem action='AcquireURL'/>"
#ifdef VIK_CONFIG_GEONAMES
	"        <menuitem action='AcquireWikipedia'/>"
#endif
	"      </menu>"
#ifdef HAVE_ZIP_H
	"      <menuitem action='ImportKMZ'/>"
#endif
	"      <separator/>"
#ifdef HAVE_ZIP_H
	"      <menuitem action='GenKMZ'/>"
#endif
	"      <menuitem action='GenImg'/>"
	"      <menuitem action='GenImgDir'/>"
	"      <menuitem action='Print'/>"
	"      <separator/>"
	"      <menuitem action='SaveExit'/>"
	"      <menuitem action='Exit'/>"
	"    </menu>"
	"    <menu action='Edit'>"
	"      <menuitem action='Cut'/>"
	"      <menuitem action='Copy'/>"
	"      <menuitem action='Paste'/>"
	"      <menuitem action='Delete'/>"
	"      <menuitem action='DeleteAll'/>"
	"      <separator/>"
	"      <menuitem action='CopyCentre'/>"
	"      <menuitem action='MapCacheFlush'/>"
	"      <menuitem action='SetDefaultLocation'/>"
	"      <menuitem action='Preferences'/>"
	"      <menuitem action='PreferencesReset'/>"
	"      <menu action='LayerDefaults'/>"
	"    </menu>"
	"    <menu action='View'>"
	"      <menuitem action='ModeUTM'/>"
#ifdef VIK_CONFIG_EXPEDIA
	"      <menuitem action='ModeExpedia'/>"
#endif
	"      <menuitem action='ModeLatLon'/>"
	"      <menuitem action='ModeMercator'/>"
	"      <separator/>"
	"      <menuitem action='GotoDefaultLocation'/>"
	"      <menuitem action='GotoAutoLocation'/>"
	"      <menuitem action='GotoSearch'/>"
	"      <menuitem action='GotoLL'/>"
	"      <menuitem action='GotoUTM'/>"
	"      <menuitem action='GoBack'/>"
	"      <menuitem action='GoForward'/>"
	"      <menuitem action='GotoToday'/>"
	"      <separator/>"
	"      <menuitem action='Refresh'/>"
	"      <separator/>"
	"      <menuitem action='SetBGColor'/>"
	"      <menuitem action='SetHLColor'/>"
	"      <menuitem action='FullScreen'/>"
	"      <menu action='SetShow'>"
	"          <menuitem action='ShowScale'/>"
	"          <menuitem action='ShowCenterMark'/>"
	"          <menuitem action='ShowHighlight'/>"
	"          <menuitem action='ViewSidePanel'/>"
	"          <menuitem action='ViewTrackGraphs'/>"
	"          <menuitem action='ViewStatusBar'/>"
	"          <menuitem action='ViewToolbar'/>"
	"          <menuitem action='ViewMainMenu'/>"
	"          <menuitem action='ViewSidePanelButtons'/>"
	"          <menuitem action='ViewSidePanelCalendar'/>"
	"      </menu>"
	"      <separator/>"
	"      <menuitem action='ZoomIn'/>"
	"      <menuitem action='ZoomOut'/>"
	"      <menuitem action='ZoomTo'/>"
	"      <menu action='SetZoom'>"
	"        <placeholder name='ZoomLevels'/>"
	"      </menu>"
        "      <menu action='SetPan'>"
        "          <menuitem action='PanNorth'/>"
        "          <menuitem action='PanEast'/>"
        "          <menuitem action='PanWest'/>"
        "          <menuitem action='PanSouth'/>"
	"      </menu>"
	"      <separator/>"
	"      <menuitem action='BGJobs'/>"
	"      <menuitem action='Log'/>"
	"    </menu>"
	"    <menu action='Layers'>"
	"      <menuitem action='Properties'/>"
	"      <separator/>"
	"    </menu>"
	"    <menu action='Tools'>"
	"      <menu action='Exttools'/>"
	"      <menuitem action='Pan'/>"
	"      <menuitem action='Zoom'/>"
	"      <menuitem action='Ruler'/>"
	"      <menuitem action='Select'/>"
	"    </menu>"
	"    <menu action='Help'>"
	"      <menuitem action='HelpEntry'/>"
	"      <menuitem action='About'/>"
	"    </menu>"
	"  </menubar>"
	"</ui>"
;

#endif
