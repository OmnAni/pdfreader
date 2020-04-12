#include "pdfreader.h"
#include <QtWidgets/QApplication>
#include "mupdf/fitz.h"

int main(int argc, char *argv[])
{
	char* input;
	float zoom, rotate;
	int page_number, page_count;
	fz_context* ctx;
	fz_document* doc;
	fz_pixmap* pix;
	fz_matrix ctm;
	QApplication a(argc, argv);
	pdfreader w;
	w.show();
	return a.exec();
}
