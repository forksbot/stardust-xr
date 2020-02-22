#ifndef STARDUSTAPI_BOOLEANFIELD_H
#define STARDUSTAPI_BOOLEANFIELD_H

#include "field.h"

namespace StardustAPI {
namespace Fields {

class BooleanField : public Field {
    Q_OBJECT
public:
    explicit BooleanField(QQuick3DNode *parent = nullptr) : Field(parent) {}

protected:
    QList<Field *> fields = QList<Field *>();

protected slots:
    void updateFieldList() {
        fields.clear();
        foreach(QQuick3DObject *child, childItems()) {
            Field *field = qobject_cast<Field *>(child);
            if(field != nullptr) {
                fields.append(field);
            }
        }
    }
};

}
}

#endif // STARDUSTAPI_BOOLEANFIELD_H
