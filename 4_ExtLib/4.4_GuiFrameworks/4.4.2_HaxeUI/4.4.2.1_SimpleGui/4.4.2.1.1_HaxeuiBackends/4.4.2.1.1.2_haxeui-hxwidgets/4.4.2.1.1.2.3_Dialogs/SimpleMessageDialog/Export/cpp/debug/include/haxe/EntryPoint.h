// GeneratedByHaxe
#ifndef INCLUDED_haxe_EntryPoint
#define INCLUDED_haxe_EntryPoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(cpp,vm,Lock)
HX_DECLARE_CLASS2(cpp,vm,Mutex)
HX_DECLARE_CLASS1(haxe,EntryPoint)

namespace haxe{


class HXCPP_CLASS_ATTRIBUTES EntryPoint_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef EntryPoint_obj OBJ_;
		EntryPoint_obj();

	public:
		enum { _hx_ClassId = 0x063dd2e8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.EntryPoint")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.EntryPoint"); }

		hx::ObjectPtr< EntryPoint_obj > __new() {
			hx::ObjectPtr< EntryPoint_obj > __this = new EntryPoint_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< EntryPoint_obj > __alloc(hx::Ctx *_hx_ctx) {
			EntryPoint_obj *__this = (EntryPoint_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(EntryPoint_obj), false, "haxe.EntryPoint"));
			*(void **)__this = EntryPoint_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EntryPoint_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("EntryPoint","\x9e","\xd2","\x23","\xa2"); }

		static void __boot();
		static  ::cpp::vm::Lock sleepLock;
		static  ::cpp::vm::Mutex mutex;
		static ::Array< ::Dynamic> pending;
		static int threadCount;
		static Float processEvents();
		static ::Dynamic processEvents_dyn();

		static void run();
		static ::Dynamic run_dyn();

};

} // end namespace haxe

#endif /* INCLUDED_haxe_EntryPoint */ 
