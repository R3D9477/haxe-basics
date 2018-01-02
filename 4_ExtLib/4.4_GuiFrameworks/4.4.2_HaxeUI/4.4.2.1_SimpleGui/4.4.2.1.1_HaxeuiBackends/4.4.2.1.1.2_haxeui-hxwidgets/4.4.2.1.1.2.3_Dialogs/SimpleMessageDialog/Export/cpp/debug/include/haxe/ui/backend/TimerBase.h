// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_backend_TimerBase
#define INCLUDED_haxe_ui_backend_TimerBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,backend,TimerBase)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Timer)
HX_DECLARE_CLASS2(hx,widgets,Trackable)

namespace haxe{
namespace ui{
namespace backend{


class HXCPP_CLASS_ATTRIBUTES TimerBase_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef TimerBase_obj OBJ_;
		TimerBase_obj();

	public:
		enum { _hx_ClassId = 0x4cb284c4 };

		void __construct(int delay, ::Dynamic callback);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.TimerBase")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.TimerBase"); }
		static hx::ObjectPtr< TimerBase_obj > __new(int delay, ::Dynamic callback);
		static hx::ObjectPtr< TimerBase_obj > __alloc(hx::Ctx *_hx_ctx,int delay, ::Dynamic callback);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TimerBase_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("TimerBase","\x56","\x7a","\x2e","\x93"); }

		 ::hx::widgets::Timer _timer;
		virtual void stop();
		::Dynamic stop_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend

#endif /* INCLUDED_haxe_ui_backend_TimerBase */ 
