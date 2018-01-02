// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_backend_AppBase
#define INCLUDED_haxe_ui_backend_AppBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,backend,AppBase)
HX_DECLARE_CLASS3(haxe,ui,backend,TimerBase)
HX_DECLARE_CLASS3(haxe,ui,util,Timer)
HX_DECLARE_CLASS2(hx,widgets,App)
HX_DECLARE_CLASS2(hx,widgets,AppConsole)
HX_DECLARE_CLASS2(hx,widgets,EventFilter)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,Frame)
HX_DECLARE_CLASS2(hx,widgets,NonOwnedWindow)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,TopLevelWindow)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace haxe{
namespace ui{
namespace backend{


class HXCPP_CLASS_ATTRIBUTES AppBase_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef AppBase_obj OBJ_;
		AppBase_obj();

	public:
		enum { _hx_ClassId = 0x6371b558 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.AppBase")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.AppBase"); }
		static hx::ObjectPtr< AppBase_obj > __new();
		static hx::ObjectPtr< AppBase_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AppBase_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("AppBase","\x32","\x9d","\xb6","\xff"); }

		 ::hx::widgets::App _app;
		 ::hx::widgets::Frame _frame;
		 ::Dynamic _onEnd;
		Dynamic _onEnd_dyn() { return _onEnd;}
		void build();
		::Dynamic build_dyn();

		virtual void init( ::Dynamic onReady, ::Dynamic onEnd);
		::Dynamic init_dyn();

		 ::Dynamic getToolkitInit();
		::Dynamic getToolkitInit_dyn();

		 ::haxe::ui::util::Timer _timer;
		void start();
		::Dynamic start_dyn();

		virtual ::Array< ::Dynamic> buildPreloadList();
		::Dynamic buildPreloadList_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend

#endif /* INCLUDED_haxe_ui_backend_AppBase */ 
