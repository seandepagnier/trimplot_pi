/* Autogenerated by png2wx.pl on Thu Oct 29 12:01:00 2015 */
#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#	include <wx/wx.h>
#endif
#include <wx/mstream.h>
#include <wx/filename.h>
#include "icons.h"

wxBitmap *_img_plots;

#ifdef PLOTS_USE_SVG
#include "ocpn_plugin.h"
wxString _svg_plots;
wxString _svg_plots_rollover;
wxString _svg_plots_toggled;
#endif

void initialize_images(void)
{
	{
		wxMemoryInputStream sm("\211PNG\r\n\032\n\000\000\000\rIHDR\000\000\000 \000\000\000 \b\006\000\000\000szz\364\000\000\000\006bKGD\000\000\000\000\000\000\371C\273\177\000\000\000\011pHYs\000\000\016\304\000\000\016\304\001\225+\016\033\000\000\000\atIME\a\337\n\035\a&\016\346V+\037\000\000\000\031tEXtComment\000Created with GIMPW\201\016\027\000\000\000\341IDATX\303\355VA\016\2030\014s\"\036\304\245\377\177@/\374\250\\\206\324im\023\027J7\215H\034\020)\211\035;\000<\361\304\277\207`M\321\225\271I\030\321\200\2723\275\215\222\261\334Eu\002by\004,\372\216Q\324\212s#\030&\302\036\r\020,\344\350\005\b_\307\200\336%\274\022z\256\201\234\366\013-\2513\321s\"\364\242\17715\257\001\000i\023x\212\367\215\340\342o\202x7\227\205\344`\207A_d\240\2666[\353\3642\027XE\314\3479\3725\235\263\241\000\341\270\272\3419\004\253\036\337\346\367\236\021\275\2357\232PB\255a\204\036\204Y\032\265\\\027\372\212}\205)\356A\377\361\016\243\211\245\203\262\320\370\275\n\254(\225Z4\215\334\352ycsJ\002\342)\253M\376\253\376\375\330\001\004qXP\375\316Y\343\000\000\000\000IEND\256B`\202", 377);
		_img_plots = new wxBitmap(wxImage(sm));
	}
    
#ifdef PLOTS_USE_SVG
    wxFileName fn;
    fn.SetPath(*GetpSharedDataLocation());
    fn.AppendDir(_T("plugins"));
    fn.AppendDir(_T("plots_pi"));
    fn.AppendDir(_T("data"));
    fn.SetFullName(_T("plots_pi.svg"));
    _svg_plots = fn.GetFullPath();
    fn.SetFullName(_T("plots_pi_rollover.svg"));
    _svg_plots_rollover = fn.GetFullPath();
    fn.SetFullName(_T("plots_pi_toggled.svg"));
    _svg_plots_toggled = fn.GetFullPath();
#endif
    
	return;
}
