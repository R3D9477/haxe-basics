// GeneratedByHaxe
#ifndef INCLUDED_haxe_CallStack
#define INCLUDED_haxe_CallStack

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(StringBuf)
HX_DECLARE_CLASS1(haxe,CallStack)
HX_DECLARE_CLASS1(haxe,StackItem)

namespace haxe{


class HXCPP_CLASS_ATTRIBUTES CallStack_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef CallStack_obj OBJ_;
		CallStack_obj();

	public:
		enum { _hx_ClassId = 0x6207a884 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.CallStack")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.CallStack"); }

		hx::ObjectPtr< CallStack_obj > __new() {
			hx::ObjectPtr< CallStack_obj > __this = new CallStack_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< CallStack_obj > __alloc(hx::Ctx *_hx_ctx) {
			CallStack_obj *__this = (CallStack_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CallStack_obj), false, "haxe.CallStack"));
			*(void **)__this = CallStack_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CallStack_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("CallStack","\xaa","\xa1","\x1d","\xb2"); }

		static ::Array< ::Dynamic> callStack();
		static ::Dynamic callStack_dyn();

		static ::Array< ::Dynamic> exceptionStack();
		static ::Dynamic exceptionStack_dyn();

		static ::String toString(::Array< ::Dynamic> stack);
		static ::Dynamic toString_dyn();

		static void itemToString( ::StringBuf b, ::haxe::StackItem s);
		static ::Dynamic itemToString_dyn();

		static ::Array< ::Dynamic> makeStack(::Array< ::String > s);
		static ::Dynamic makeStack_dyn();

};

} // end namespace haxe

#endif /* INCLUDED_haxe_CallStack */ 
