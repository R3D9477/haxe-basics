// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_util_Timer
#define INCLUDED_haxe_ui_util_Timer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_backend_TimerBase
#include <haxe/ui/backend/TimerBase.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,TimerBase)
HX_DECLARE_CLASS3(haxe,ui,util,Timer)

namespace haxe{
namespace ui{
namespace util{


class HXCPP_CLASS_ATTRIBUTES Timer_obj : public  ::haxe::ui::backend::TimerBase_obj
{
	public:
		typedef  ::haxe::ui::backend::TimerBase_obj super;
		typedef Timer_obj OBJ_;
		Timer_obj();

	public:
		enum { _hx_ClassId = 0x535acc21 };

		void __construct(int delay, ::Dynamic callback);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.util.Timer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.util.Timer"); }
		static hx::ObjectPtr< Timer_obj > __new(int delay, ::Dynamic callback);
		static hx::ObjectPtr< Timer_obj > __alloc(hx::Ctx *_hx_ctx,int delay, ::Dynamic callback);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Timer_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Timer","\xa5","\x2f","\x63","\xa3"); }

		static  ::haxe::ui::util::Timer delay( ::Dynamic f,int time_ms);
		static ::Dynamic delay_dyn();

		void stop();

};

} // end namespace haxe
} // end namespace ui
} // end namespace util

#endif /* INCLUDED_haxe_ui_util_Timer */ 
