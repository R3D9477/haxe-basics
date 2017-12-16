// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_custom_SimpleListView
#define INCLUDED_haxe_ui_backend_hxwidgets_custom_SimpleListView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_ListView
#include <hx/widgets/ListView.h>
#endif
HX_DECLARE_CLASS5(haxe,ui,backend,hxwidgets,custom,SimpleListView)
HX_DECLARE_CLASS2(hx,widgets,Control)
HX_DECLARE_CLASS2(hx,widgets,Event)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,ListCtrl)
HX_DECLARE_CLASS2(hx,widgets,ListView)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace custom{


class HXCPP_CLASS_ATTRIBUTES SimpleListView_obj : public  ::hx::widgets::ListView_obj
{
	public:
		typedef  ::hx::widgets::ListView_obj super;
		typedef SimpleListView_obj OBJ_;
		SimpleListView_obj();

	public:
		enum { _hx_ClassId = 0x413eef4b };

		void __construct( ::hx::widgets::Window parent,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.hxwidgets.custom.SimpleListView")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.hxwidgets.custom.SimpleListView"); }
		static hx::ObjectPtr< SimpleListView_obj > __new( ::hx::widgets::Window parent,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		static hx::ObjectPtr< SimpleListView_obj > __alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SimpleListView_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("SimpleListView","\x55","\xd8","\x94","\x7a"); }

		void onResized( ::hx::widgets::Event event);
		::Dynamic onResized_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace custom

#endif /* INCLUDED_haxe_ui_backend_hxwidgets_custom_SimpleListView */ 
