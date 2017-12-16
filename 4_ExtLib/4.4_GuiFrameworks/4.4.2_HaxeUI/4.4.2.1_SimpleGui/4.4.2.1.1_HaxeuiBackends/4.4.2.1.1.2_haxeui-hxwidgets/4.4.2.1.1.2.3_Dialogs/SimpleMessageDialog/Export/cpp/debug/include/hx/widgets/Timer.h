// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_Timer
#define INCLUDED_hx_widgets_Timer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_3fabc4d277dfeb98
#define INCLUDED_3fabc4d277dfeb98
#include "wx/timer.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Timer)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES Timer_obj : public  ::hx::widgets::EvtHandler_obj
{
	public:
		typedef  ::hx::widgets::EvtHandler_obj super;
		typedef Timer_obj OBJ_;
		Timer_obj();

	public:
		enum { _hx_ClassId = 0x7f10784e };

		void __construct( ::hx::widgets::Window window,hx::Null< int >  __o_milliseconds,hx::Null< bool >  __o_oneShot,hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.Timer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.Timer"); }
		static hx::ObjectPtr< Timer_obj > __new( ::hx::widgets::Window window,hx::Null< int >  __o_milliseconds,hx::Null< bool >  __o_oneShot,hx::Null< int >  __o_id);
		static hx::ObjectPtr< Timer_obj > __alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window window,hx::Null< int >  __o_milliseconds,hx::Null< bool >  __o_oneShot,hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Timer_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Timer","\xa5","\x2f","\x63","\xa3"); }

		bool start(int milliseconds,hx::Null< bool >  oneShot);
		::Dynamic start_dyn();

		void stop();
		::Dynamic stop_dyn();

		::cpp::Pointer<  wxTimer > timerRef;
		::cpp::Pointer<  wxTimer > get_timerRef();
		::Dynamic get_timerRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_Timer */ 
