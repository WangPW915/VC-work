
// 实验2_317View.h : C实验2_317View 类的接口
//

#pragma once


class C实验2_317View : public CView
{
protected: // 仅从序列化创建
	C实验2_317View();
	DECLARE_DYNCREATE(C实验2_317View)

// 特性
public:
	C实验2_317Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~C实验2_317View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // 实验2_317View.cpp 中的调试版本
inline C实验2_317Doc* C实验2_317View::GetDocument() const
   { return reinterpret_cast<C实验2_317Doc*>(m_pDocument); }
#endif

