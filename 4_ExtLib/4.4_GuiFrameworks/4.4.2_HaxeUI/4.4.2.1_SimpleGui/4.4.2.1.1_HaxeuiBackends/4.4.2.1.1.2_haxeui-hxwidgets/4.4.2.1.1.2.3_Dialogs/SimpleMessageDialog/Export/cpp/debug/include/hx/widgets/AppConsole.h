// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_AppConsole
#define INCLUDED_hx_widgets_AppConsole

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_EventFilter
#include <hx/widgets/EventFilter.h>
#endif
HX_DECLARE_CLASS2(hx,widgets,AppConsole)
HX_DECLARE_CLASS2(hx,widgets,EventFilter)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Trackable)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES AppConsole_obj : public  ::hx::widgets::EvtHandler_obj
{
	public:
		typedef  ::hx::widgets::EvtHandler_obj super;
		typedef AppConsole_obj OBJ_;
		AppConsole_obj();

	public:
		enum { _hx_ClassId = 0x30719a75 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.AppConsole")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.AppConsole"); }
		static hx::ObjectPtr< AppConsole_obj > __new();
		static hx::ObjectPtr< AppConsole_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AppConsole_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("AppConsole","\xd6","\x60","\xbf","\x08"); }

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_AppConsole */ 
