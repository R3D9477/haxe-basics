// GeneratedByHaxe
#ifndef INCLUDED_haxe_MainLoop
#define INCLUDED_haxe_MainLoop

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,MainEvent)
HX_DECLARE_CLASS1(haxe,MainLoop)

namespace haxe{


class HXCPP_CLASS_ATTRIBUTES MainLoop_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef MainLoop_obj OBJ_;
		MainLoop_obj();

	public:
		enum { _hx_ClassId = 0x0351e9c3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.MainLoop")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.MainLoop"); }

		hx::ObjectPtr< MainLoop_obj > __new() {
			hx::ObjectPtr< MainLoop_obj > __this = new MainLoop_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< MainLoop_obj > __alloc(hx::Ctx *_hx_ctx) {
			MainLoop_obj *__this = (MainLoop_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(MainLoop_obj), false, "haxe.MainLoop"));
			*(void **)__this = MainLoop_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MainLoop_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("MainLoop","\x5d","\xd7","\xeb","\x79"); }

		static void __boot();
		static  ::haxe::MainEvent pending;
		static void sortEvents();
		static ::Dynamic sortEvents_dyn();

		static Float tick();
		static ::Dynamic tick_dyn();

};

} // end namespace haxe

#endif /* INCLUDED_haxe_MainLoop */ 
